import pandas as pd
import plotly.graph_objects as go
from plotly.subplots import make_subplots



df_1h = pd.read_csv('btc_4h.csv')
df_1h['datetime'] = pd.to_datetime(df_1h['datetime'])
df_1h.set_index('datetime', inplace=True)



def calculate_atr(dataframe, period=14):
    df = dataframe.copy()
    df['TR'] = df[['high', 'low', 'close']].apply(lambda row: max(row['high'] - row['low'], abs(row['high'] - row['close']), abs(row['low'] - row['close'])), axis=1)
    df['ATR'] = df['TR'].rolling(window=period).mean()
    return df['ATR']



def generate_moving_averages(dataframe, short_window=50, long_window=200):
    df = dataframe.copy()
    df['Short_MA'] = df['close'].rolling(window=short_window, min_periods=1).mean()
    df['Long_MA'] = df['close'].rolling(window=long_window, min_periods=1).mean()
    return df



def calculate_stochastic_oscillator(dataframe, k_period=14, d_period=3):
    df = dataframe.copy()
    df['Lowest_Low'] = df['low'].rolling(window=k_period).min()
    df['Highest_High'] = df['high'].rolling(window=k_period).max()
    df['%K'] = ((df['close'] - df['Lowest_Low']) / (df['Highest_High'] - df['Lowest_Low'])) * 100
    df['%D'] = df['%K'].rolling(window=d_period).mean()
    return df[['%K', '%D']]



def calculate_additional_metrics(dataframe):
    df = dataframe.copy()

    
    
    for col in ['MACD_Signal', 'ATR_Signal', 'MA_Crossover_Signal', 'Stochastic_Signal']:
        df[col + '_Daily_Return'] = df[col].shift(1) * df['close'].pct_change()

    
    
    metrics = {}

    for col in ['MACD_Signal', 'ATR_Signal', 'MA_Crossover_Signal', 'Stochastic_Signal']:
        
        
        cumulative_returns = (1 + df[col + '_Daily_Return']).cumprod() - 1
        metrics[col] = {
            'Cumulative_Returns': cumulative_returns[-1],
            'Gross_Profit': df[df[col + '_Daily_Return'] > 0][col + '_Daily_Return'].sum(),
            'Gross_Loss': df[df[col + '_Daily_Return'] < 0][col + '_Daily_Return'].sum(),
            'Net_Profit': cumulative_returns[-1],
            'Total_Closed_Trades': df[col].diff().abs().sum() / 2,  
            
            'Win_Rate': (df[df[col + '_Daily_Return'] > 0][col + '_Daily_Return'].count() / df[col + '_Daily_Return'].count()) * 100,
            'Max_Drawdown': ((cumulative_returns + 1) / (cumulative_returns + 1).cummax() - 1).min(),
            'Average_Winning_Trade': df[df[col + '_Daily_Return'] > 0][col + '_Daily_Return'].mean(),
            'Average_Losing_Trade': df[df[col + '_Daily_Return'] < 0][col + '_Daily_Return'].mean(),
            'Buy_and_Hold_Return_of_BTC': (df['close'].iloc[-1] / df['close'].iloc[0]) - 1,
            'Largest_Losing_Trade': df[df[col + '_Daily_Return'] == df[df[col + '_Daily_Return'] < 0][col + '_Daily_Return'].min()]['close'].iloc[0],
            'Largest_Winning_Trade': df[df[col + '_Daily_Return'] == df[df[col + '_Daily_Return'] > 0][col + '_Daily_Return'].max()]['close'].iloc[0],
            'Sharpe_Ratio': (df[col + '_Daily_Return'].mean() / df[col + '_Daily_Return'].std()) * (252 ** 0.5),  
            
            'Sortino_Ratio': (df[col + '_Daily_Return'].mean() / df[df[col + '_Daily_Return'] < 0][col + '_Daily_Return'].std()) * (252 ** 0.5),  
            
        }

    return metrics



df_1h['12_EMA'] = df_1h['close'].ewm(span=12, adjust=False).mean()
df_1h['26_EMA'] = df_1h['close'].ewm(span=26, adjust=False).mean()
df_1h['MACD'] = df_1h['12_EMA'] - df_1h['26_EMA']
df_1h['Signal_Line'] = df_1h['MACD'].ewm(span=9, adjust=False).mean()
df_1h['MACD_Signal'] = 0
df_1h.loc[df_1h['MACD'] > df_1h['Signal_Line'], 'MACD_Signal'] = 1
df_1h.loc[df_1h['MACD'] < df_1h['Signal_Line'], 'MACD_Signal'] = -1



df_1h['ATR'] = calculate_atr(df_1h)
df_1h['ATR_Signal'] = 0
threshold_atr = 1.5
df_1h.loc[df_1h['close'] - df_1h['open'] > threshold_atr * df_1h['ATR'], 'ATR_Signal'] = 1
df_1h.loc[df_1h['open'] - df_1h['close'] > threshold_atr * df_1h['ATR'], 'ATR_Signal'] = -1



df_1h = generate_moving_averages(df_1h)
df_1h['MA_Crossover_Signal'] = 0
df_1h.loc[df_1h['Short_MA'] > df_1h['Long_MA'], 'MA_Crossover_Signal'] = 1
df_1h.loc[df_1h['Short_MA'] < df_1h['Long_MA'], 'MA_Crossover_Signal'] = -1



stochastic_df = calculate_stochastic_oscillator(df_1h)
df_1h['Stochastic_Signal'] = 0
overbought_threshold = 80
oversold_threshold = 20
df_1h.loc[stochastic_df['%K'] < oversold_threshold, 'Stochastic_Signal'] = 1
df_1h.loc[stochastic_df['%K'] > overbought_threshold, 'Stochastic_Signal'] = -1



additional_metrics = calculate_additional_metrics(df_1h)



for strategy, metrics in additional_metrics.items():
    print(f'Additional Performance Metrics for {strategy}:')
    for metric_name, metric_value in metrics.items():
        print(f'{metric_name}: {metric_value:.4f}')
    print('-' * 30)



fig = make_subplots(rows=4, cols=1, subplot_titles=['MACD', 'ATR', 'Moving Average Crossover', 'Stochastic Oscillator'])



fig.add_trace(go.Scatter(x=df_1h.index, y=df_1h['close'], mode='lines', name='Closing Price', line=dict(color='blue', width=1)), row=1, col=1)



signal_colors = {'MACD_Signal': 'purple', 'ATR_Signal': 'green', 'MA_Crossover_Signal': 'orange', 'Stochastic_Signal': 'red'}
signal_titles = {'MACD_Signal': 'MACD Signals', 'ATR_Signal': 'ATR Signals', 'MA_Crossover_Signal': 'Moving Average Crossover Signals', 'Stochastic_Signal': 'Stochastic Oscillator Signals'}

for i, col in enumerate(['MACD_Signal', 'ATR_Signal', 'MA_Crossover_Signal', 'Stochastic_Signal'], start=1):
    buy_signals = df_1h.index[df_1h[col] == 1]
    sell_signals = df_1h.index[df_1h[col] == -1]

    
    
    if not buy_signals.empty:
        fig.add_trace(go.Scatter(x=buy_signals, y=df_1h.loc[buy_signals, 'close'],
                                 mode='markers', name=f'{col} Buy Signal', marker=dict(symbol='triangle-up', size=5, color=signal_colors[col])), row=i, col=1)

    
    
    if not sell_signals.empty:
        fig.add_trace(go.Scatter(x=sell_signals, y=df_1h.loc[sell_signals, 'close'],
                                 mode='markers', name=f'{col} Sell Signal', marker=dict(symbol='triangle-down', size=5, color=signal_colors[col])), row=i, col=1)



fig.update_layout(
    title='Trading Signals on 1-hour Dataset',
    showlegend=False,
)



fig.show()
