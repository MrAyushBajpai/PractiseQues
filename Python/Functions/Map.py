# Map Function

# 1. Basic Example: Apply a function to a list
def square(x):
    """Function to return the square of a number."""
    return x * x

numbers = [1, 2, 3, 4, 5]
squared_numbers = list(map(square, numbers))
print("Squared numbers:", squared_numbers)  # Output: [1, 4, 9, 16, 25]

# 2. Using a Lambda Function with map
doubled_numbers = list(map(lambda x: x * 2, numbers))
print("Doubled numbers:", doubled_numbers)  # Output: [2, 4, 6, 8, 10]

# 3. Applying a Function to Multiple Iterables
def add(x, y):
    """Function to add two numbers."""
    return x + y

numbers1 = [1, 2, 3]
numbers2 = [4, 5, 6]
added_numbers = list(map(add, numbers1, numbers2))
print("Added numbers:", added_numbers)  # Output: [5, 7, 9]

# 4. Converting Strings to Integers
str_numbers = ['1', '2', '3', '4', '5']
int_numbers = list(map(int, str_numbers))
print("Integer numbers:", int_numbers)  # Output: [1, 2, 3, 4, 5]

# 5. Mapping with a Custom Function
def capitalize_word(word):
    """Function to capitalize a word."""
    return word.capitalize()

words = ['hello', 'world', 'python']
capitalized_words = list(map(capitalize_word, words))
print("Capitalized words:", capitalized_words)  # Output: ['Hello', 'World', 'Python']

# 6. Mapping with a Built-in Function
lowercase_words = list(map(str.lower, capitalized_words))
print("Lowercase words:", lowercase_words)  # Output: ['hello', 'world', 'python']

# 7. Using map with a Dictionary
def format_key_value(key, value):
    """Function to format a key-value pair as a string."""
    return f"{key}: {value}"

dict_data = {'name': 'Alice', 'age': 25, 'city': 'Wonderland'}
formatted_dict = list(map(format_key_value, dict_data.keys(), dict_data.values()))
print("Formatted dictionary:", formatted_dict)  # Output: ['name: Alice', 'age: 25', 'city: Wonderland']

# 8. Filtering None Results with map
def to_upper_or_none(word):
    """Function to return the uppercase of a word or None if it's empty."""
    return word.upper() if word else None

words_with_none = ['hello', '', 'world', 'python', '']
uppercased_words = list(filter(None, map(to_upper_or_none, words_with_none)))
print("Uppercased words without None:", uppercased_words)  # Output: ['HELLO', 'WORLD', 'PYTHON']

# 9. Using map with a Generator Expression
def even_or_odd(n):
    """Function to return 'even' or 'odd' based on the number."""
    return 'even' if n % 2 == 0 else 'odd'

numbers = range(1, 6)
even_odd = list(map(even_or_odd, numbers))
print("Even or Odd:", even_odd)  # Output: ['odd', 'even', 'odd', 'even', 'odd']
