# Lambda Function

# 1. Basic Lambda Function
square = lambda x: x * x
print("Square of 5:", square(5))  # Output: 25

# 2. Lambda Function with Multiple Arguments
add = lambda x, y: x + y
print("Sum of 3 and 4:", add(3, 4))  # Output: 7

# 3. Lambda Function for Filtering
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
print("Even numbers:", even_numbers)  # Output: [2, 4, 6, 8, 10]

# 4. Lambda Function for Mapping
squared_numbers = list(map(lambda x: x * x, numbers))
print("Squared numbers:", squared_numbers)  # Output: [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

# 5. Lambda Function for Sorting
people = [
    {'name': 'Alice', 'age': 25},
    {'name': 'Bob', 'age': 30},
    {'name': 'Charlie', 'age': 20}
]
sorted_people = sorted(people, key=lambda person: person['age'])
print("People sorted by age:", sorted_people)
# Output: [{'name': 'Charlie', 'age': 20}, {'name': 'Alice', 'age': 25}, {'name': 'Bob', 'age': 30}]

# 6. Lambda Function for Reducing
from functools import reduce
product = reduce(lambda x, y: x * y, numbers)
print("Product of all numbers:", product)  # Output: 3628800

# 7. Lambda Function in List Comprehensions
incremented_numbers = [lambda x=x: x + 1 for x in numbers]
print("Incremented numbers:")
for increment in incremented_numbers:
    print(increment(), end=" ")  # Output: 2 3 4 5 6 7 8 9 10 11

# 8. Lambda Function for Conditional Expressions
max_of_two = lambda x, y: x if x > y else y
print("Max of 5 and 10:", max_of_two(5, 10))  # Output: 10

# 9. Lambda Function as a Default Argument
def apply_function(x, func=lambda x: x * 2):
    return func(x)

print("Applying default lambda function to 5:", apply_function(5))  # Output: 10
print("Applying custom lambda function to 5:", apply_function(5, lambda x: x + 3))  # Output: 8

# 10. Lambda Function in Dictionaries
operations = {
    'add': lambda x, y: x + y,
    'subtract': lambda x, y: x - y,
    'multiply': lambda x, y: x * y,
    'divide': lambda x, y: x / y if y != 0 else 'Undefined'
}

a, b = 10, 5
print("Addition:", operations['add'](a, b))        # Output: 15
print("Subtraction:", operations['subtract'](a, b))  # Output: 5
print("Multiplication:", operations['multiply'](a, b))  # Output: 50
print("Division:", operations['divide'](a, b))      # Output: 2.0

# 11. Lambda Function in a Class Method
class MyClass:
    def __init__(self, value):
        self.value = value

    def apply(self, func=lambda x: x * 2):
        return func(self.value)

obj = MyClass(10)
print("Applying default lambda function to object value:", obj.apply())  # Output: 20
print("Applying custom lambda function to object value:", obj.apply(lambda x: x + 5))  # Output: 15
