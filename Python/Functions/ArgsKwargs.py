# *args and **kwargs

# 1. Using *args to handle variable-length positional arguments
def print_args(*args):
    """Function that prints all positional arguments."""
    print("Positional arguments:")
    for arg in args:
        print(arg)

# Call the function with different numbers of arguments
print_args(1, 2, 3)
print_args('apple', 'banana', 'cherry', 'date')

# 2. Using **kwargs to handle variable-length keyword arguments
def print_kwargs(**kwargs):
    """Function that prints all keyword arguments."""
    print("Keyword arguments:")
    for key, value in kwargs.items():
        print(f"{key}: {value}")

# Call the function with different keyword arguments
print_kwargs(name='Alice', age=30, city='New York')
print_kwargs(product='Laptop', price=1200, available=True)

# 3. Combining *args and **kwargs in a single function
def combined_args_kwargs(*args, **kwargs):
    """Function that handles both positional and keyword arguments."""
    print("Positional arguments:")
    for arg in args:
        print(arg)
    
    print("\nKeyword arguments:")
    for key, value in kwargs.items():
        print(f"{key}: {value}")

# Call the function with both positional and keyword arguments
combined_args_kwargs(1, 2, 3, name='Bob', age=25, country='Canada')

# 4. Example with default values and variable-length arguments
def student_info(name, *subjects, grade='Not assigned'):
    """Function that takes a name, subjects, and an optional grade."""
    print(f"Name: {name}")
    print("Subjects:", ', '.join(subjects))
    print("Grade:", grade)

# Call the function with different sets of arguments
student_info('Charlie', 'Math', 'Science', grade='A')
student_info('David', 'History', 'Geography')
