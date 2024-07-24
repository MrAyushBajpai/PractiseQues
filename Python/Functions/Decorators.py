# Decorators

# 1. Basic Decorator
def simple_decorator(func):
    """A basic decorator that prints a message before and after calling the function."""
    def wrapper():
        print("Before calling the function")
        func()
        print("After calling the function")
    return wrapper

@simple_decorator
def say_hello():
    """Function to say hello."""
    print("Hello!")

# Call the decorated function
say_hello()

# 2. Decorator with Arguments
def repeat_decorator(times):
    """Decorator that repeats the function call a given number of times."""
    def decorator(func):
        def wrapper(*args, **kwargs):
            for _ in range(times):
                func(*args, **kwargs)
        return wrapper
    return decorator

@repeat_decorator(times=3)
def print_message(message):
    """Function to print a message."""
    print(message)

# Call the decorated function
print_message("Hello again!")

# 3. Decorator with Function Arguments
def log_arguments(func):
    """Decorator that logs the arguments passed to the function."""
    def wrapper(*args, **kwargs):
        print(f"Arguments: args={args}, kwargs={kwargs}")
        return func(*args, **kwargs)
    return wrapper

@log_arguments
def add(a, b):
    """Function to add two numbers."""
    return a + b

# Call the decorated function
result = add(5, 3)
print("Result:", result)

# 4. Class Method Decorator
class MyClass:
    def __init__(self, value):
        self.value = value

    def display(self):
        """Method to display the value."""
        print(f"Value: {self.value}")

    @staticmethod
    def static_method_decorator(func):
        """Decorator for static methods."""
        def wrapper(*args, **kwargs):
            print("Static method decorator applied")
            return func(*args, **kwargs)
        return wrapper

    @staticmethod_method_decorator
    def static_method(message):
        """Static method with a decorator."""
        print(f"Message: {message}")

# Call the static method with decorator
MyClass.static_method("Hello from static method!")

# 5. Decorator for Timing Execution
import time

def timing_decorator(func):
    """Decorator that measures the execution time of the function."""
    def wrapper(*args, **kwargs):
        start_time = time.time()
        result = func(*args, **kwargs)
        end_time = time.time()
        print(f"Execution time: {end_time - start_time} seconds")
        return result
    return wrapper

@timing_decorator
def long_running_task():
    """Function that simulates a long-running task."""
    time.sleep(2)  # Sleep for 2 seconds

# Call the decorated function
long_running_task()

# 6. Decorator with `functools.wraps`
from functools import wraps

def decorator_with_wraps(func):
    """Decorator that uses functools.wraps to preserve metadata of the original function."""
    @wraps(func)
    def wrapper(*args, **kwargs):
        print("Decorator with wraps")
        return func(*args, **kwargs)
    return wrapper

@decorator_with_wraps
def example_function():
    """Example function to demonstrate functools.wraps."""
    print("Function executed")

# Call the decorated function and check metadata
example_function()
print(f"Function name: {example_function.__name__}")
print(f"Function docstring: {example_function.__doc__}")
