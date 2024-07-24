# Closures

# 1. Basic Closure Example
def outer_function(x):
    """Outer function that defines and returns a nested function."""
    def inner_function(y):
        """Inner function that uses the outer function's variable."""
        return x + y
    return inner_function

# Create a closure
closure = outer_function(10)

# Call the closure with an argument
print("Result of closure with 5:", closure(5))  # Output: 15

# 2. Closure with Multiple Nested Functions
def multiplier(factor):
    """Outer function that defines and returns a nested function."""
    def multiply_by(n):
        """Inner function that multiplies its argument by the outer function's factor."""
        return n * factor
    return multiply_by

# Create closures with different factors
double = multiplier(2)
triple = multiplier(3)

# Call the closures with an argument
print("Double 5:", double(5))  # Output: 10
print("Triple 5:", triple(5))  # Output: 15

# 3. Closure Capturing Local Variables
def make_counter():
    """Function that creates a counter using a closure."""
    count = 0
    def counter():
        nonlocal count  # Access the nonlocal variable
        count += 1
        return count
    return counter

# Create a counter closure
my_counter = make_counter()

# Call the closure multiple times
print("Counter:", my_counter())  # Output: 1
print("Counter:", my_counter())  # Output: 2
print("Counter:", my_counter())  # Output: 3

# 4. Closures with Arguments and Default Values
def power_of(exponent):
    """Outer function that creates a closure to compute power of a number."""
    def power(base, exp=exponent):
        """Inner function that computes base raised to the power of exp."""
        return base ** exp
    return power

# Create a closure for square and cube
square = power_of(2)
cube = power_of(3)

# Call the closures with arguments
print("Square of 4:", square(4))  # Output: 16
print("Cube of 4:", cube(4))  # Output: 64

# 5. Closures with Stateful Behavior
def make_adder(x):
    """Outer function that returns a closure that adds a specific value."""
    def adder(y):
        return x + y
    adder.x = x  # Adding an attribute to the inner function
    return adder

# Create an adder closure
add_five = make_adder(5)

# Call the closure and access its attribute
print("Add 10 to 5:", add_five(10))  # Output: 15
print("Adder's internal value:", add_five.x)  # Output: 5
