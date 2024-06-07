package tictactoe.game;
import java.util.Arrays;

public class Board 
{
	private final int n;
	public final char[][] board;
	
	public Board(int n)
	{
		this.n=n;
		board = new char[n][n];
		initializeArray();
		
	}
	
	private void initializeArray()
	{
		for(char[] i:board)
		{
			Arrays.fill(i, '#');
		}
	}
	
	public boolean isValidMove(int row, int col)
	{
		if(row<0 || row>=n || col<0 || col>=n )
		{
			return false;
		}
		else if(board[row][col]!='#')
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	public boolean isFull()
	{
		for(char[] i:board)
		{
			for(char j:i)
			{
				if(j=='#')
					return false;
			}
		}
		return true;
	}
	
	public void Move(int row, int col,char Symbol)
	{
		
		board[row][col]=Symbol;
		
	}

	public boolean hasWinner(char symbol)
	{
		//diagonals
		boolean r=true,l=true;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
					l&= (board[i][j]==symbol);
				}
				
				if((i+j)==(n-1))
				{
					r&=(board[i][j]==symbol);
				}
			}
		}
		if(r || l)
			return true;
		
		r=true;
		
		//row wise
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				r&=(board[i][j]==symbol);
			}
			if(r)
				return true;
			else
				r=true;
		}
		
		l=true;
		//column wise
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				l&=(board[j][i]==symbol);
			}
			if(l)
				return true;
			else
				l=true;
		}
		
		return false;
	}
	
	public void printBoard()
	{
		final String dash = " -------";
		System.out.println(dash.repeat(n-1));
		for(char[] i:board)
		{
			for(char j:i)
			{
				System.out.print(j+"\t");
			}
			System.out.println("\n"+dash.repeat(n-1));
		}
	}
}
