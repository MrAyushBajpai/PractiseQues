# Dictionary Comprehension

# 1. Basic dictionary comprehension
numbers = [1, 2, 3, 4, 5]
squared_dict = {x: x**2 for x in numbers}
# Creates a dictionary where the keys are numbers and the values are their squares
print("Squared dictionary:", squared_dict)

# 2. Dictionary comprehension with a condition
even_squared_dict = {x: x**2 for x in numbers if x % 2 == 0}
# Creates a dictionary with only even numbers as keys and their squares as values
print("Even squared dictionary:", even_squared_dict)

# 3. Dictionary comprehension with multiple conditions
filtered_dict = {x: x**2 for x in numbers if x % 2 == 0 and x > 2}
# Creates a dictionary with even numbers greater than 2 as keys and their squares as values
print("Filtered dictionary:", filtered_dict)

# 4. Dictionary comprehension with transformation
words = ["hello", "world", "python"]
word_length_dict = {word: len(word) for word in words}
# Creates a dictionary with words as keys and their lengths as values
print("Word length dictionary:", word_length_dict)

# 5. Dictionary comprehension with function call
def double(x):
    return x * 2

doubled_dict = {x: double(x) for x in numbers}
# Creates a dictionary where keys are numbers and values are the result of doubling each number
print("Doubled dictionary:", doubled_dict)

# 6. Dictionary comprehension from another dictionary
student_scores = {'Alice': 90, 'Bob': 85, 'Charlie': 92}
high_scores_dict = {name: score for name, score in student_scores.items() if score > 90}
# Creates a dictionary with students who have scores greater than 90
print("High scores dictionary:", high_scores_dict)

# 7. Dictionary comprehension with nested iteration
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
flattened_dict = {f"item_{i}_{j}": value for i, row in enumerate(matrix) for j, value in enumerate(row)}
# Creates a dictionary with flattened matrix values and a custom key format
print("Flattened dictionary:", flattened_dict)
