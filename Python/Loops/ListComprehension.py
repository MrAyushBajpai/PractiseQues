# List Comprehension

# 1. Basic list comprehension
numbers = [1, 2, 3, 4, 5]
squared_numbers = [x**2 for x in numbers]
# Creates a list of squares of each number in the original list
print("Squared numbers:", squared_numbers)

# 2. List comprehension with a condition
even_numbers = [x for x in numbers if x % 2 == 0]
# Creates a list of even numbers from the original list
print("Even numbers:", even_numbers)

# 3. List comprehension with multiple conditions
filtered_numbers = [x for x in numbers if x % 2 == 0 and x > 2]
# Creates a list of numbers that are both even and greater than 2
print("Filtered numbers:", filtered_numbers)

# 4. List comprehension with transformation
words = ["hello", "world", "python"]
uppercase_words = [word.upper() for word in words]
# Creates a list of words converted to uppercase
print("Uppercase words:", uppercase_words)

# 5. Nested list comprehension
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
flattened_matrix = [element for row in matrix for element in row]
# Flattens a 2D matrix into a 1D list
print("Flattened matrix:", flattened_matrix)

# 6. List comprehension with function call
def double(x):
    return x * 2

doubled_numbers = [double(x) for x in numbers]
# Applies the double function to each number in the original list
print("Doubled numbers:", doubled_numbers)

# 7. List comprehension with dictionary items
student_scores = {'Alice': 90, 'Bob': 85, 'Charlie': 92}
high_scores = [name for name, score in student_scores.items() if score > 90]
# Creates a list of student names with scores greater than 90
print("High scorers:", high_scores)
