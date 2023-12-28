import csv
import pandas as pd
from collections import defaultdict

data = []
with open('Book1.csv', 'r') as csvfile:
    reader = csv.reader(csvfile)
    next(reader)
    for row in reader:
        data.append(row)

df = pd.DataFrame(data, columns=['Outlook', 'Temperature', 'Humidity', 'Windy', 'pt'])

class_priors = df['pt'].value_counts(normalize=True).to_dict()
# print(class_priors)

feature_probabilities = defaultdict(dict)

for feature in df.columns[:-1]:
    for label in df['pt'].unique():
        for value in df[feature].unique():
            count = len(df[(df[feature] == value) & (df['pt'] == label)])
            total_count = len(df[df['pt'] == label])
            probability = (count + 1) / (total_count + len(df[feature].unique()))
            feature_probabilities[label][f"{feature}_{value}"] = probability

def classify(data_point, class_priors, feature_probabilities):
    best_label = None
    best_score = -float('inf')

    for label in class_priors.keys():
        score = 0
        for feature in data_point:
            if f"{feature}_{data_point[feature]}" in feature_probabilities[label]:
                score +=feature_probabilities[label][f"{feature}_{data_point[feature]}"]
            else:
                score += 1 / (len(df.columns[:-1]) + len(df[feature].unique()))

        score += class_priors[label]
        # print()

        if score > best_score:
            best_score = score
            best_label = label

    return best_label

new_data_point = {
    'Outlook': 'rainy',
    'Temperature': 'mild',
    'Humidity': 'high',
    'Windy': 'strong'
}

predicted_label = classify(new_data_point, class_priors, feature_probabilities)
print(f"Predicted label: {predicted_label}")
