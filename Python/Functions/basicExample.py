# Python Functions

# 1. Basic Function Definition
def greet(name):
    """Function that prints a greeting message."""
    print(f"Hello, {name}!")

# Call the basic function
greet("Alice")

# 2. Function with Default Arguments
def greet_default(name="Guest"):
    """Function with a default argument."""
    print(f"Hello, {name}!")

# Call the function with and without an argument
greet_default()        # Uses default argument
greet_default("Bob")   # Uses provided argument

# 3. Function with Keyword Arguments
def introduce(name, age):
    """Function that uses keyword arguments."""
    print(f"My name is {name} and I am {age} years old.")

# Call the function using keyword arguments
introduce(age=25, name="Charlie")

# 4. Function with Variable-Length Arguments
def summarize(*numbers):
    """Function that takes a variable number of arguments."""
    total = sum(numbers)
    count = len(numbers)
    print(f"Total: {total}, Count: {count}")

# Call the function with different numbers of arguments
summarize(1, 2, 3)
summarize(4, 5, 6, 7, 8)

# 5. Function with Keyword-Only Arguments
def format_address(street, city, *, country="USA"):
    """Function that takes keyword-only arguments."""
    print(f"{street}, {city}, {country}")

# Call the function with and without keyword-only argument
format_address("123 Elm St", "Springfield")
format_address("456 Oak St", "Shelbyville", country="Canada")

# 6. Function with Variable-Length Keyword Arguments
def user_info(**info):
    """Function that takes a variable number of keyword arguments."""
    for key, value in info.items():
        print(f"{key}: {value}")

# Call the function with various keyword arguments
user_info(name="Alice", age=30, city="New York")

# 7. Lambda Function
square = lambda x: x**2
"""A simple lambda function that squares its input."""

# Call the lambda function
print("Square of 5:", square(5))

# 8. Function Returning a Value
def multiply(x, y):
    """Function that returns the product of two numbers."""
    return x * y

# Call the function and print the result
result = multiply(4, 5)
print("Product:", result)
