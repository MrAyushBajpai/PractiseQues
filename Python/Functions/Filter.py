# FIlter Function

# 1. Basic Example: Filter even numbers from a list
def is_even(x):
    """Function to check if a number is even."""
    return x % 2 == 0

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(is_even, numbers))
print("Even numbers:", even_numbers)  # Output: [2, 4, 6, 8, 10]

# 2. Using a Lambda Function with filter
odd_numbers = list(filter(lambda x: x % 2 != 0, numbers))
print("Odd numbers:", odd_numbers)  # Output: [1, 3, 5, 7, 9]

# 3. Filtering Strings in a List
words = ["apple", "banana", "cherry", "date", "elderberry"]
short_words = list(filter(lambda word: len(word) <= 5, words))
print("Short words:", short_words)  # Output: ['apple', 'date']

# 4. Filtering with Multiple Conditions
adults = [
    {"name": "Alice", "age": 25},
    {"name": "Bob", "age": 17},
    {"name": "Charlie", "age": 30},
    {"name": "Diana", "age": 15}
]
adults_only = list(filter(lambda person: person['age'] >= 18, adults))
print("Adults only:", adults_only)
# Output: [{'name': 'Alice', 'age': 25}, {'name': 'Charlie', 'age': 30}]

# 5. Filtering None Values
mixed_list = [0, 1, None, 2, '', 3, 'hello', 4, None, 5]
filtered_list = list(filter(None, mixed_list))
print("Filtered list without None values:", filtered_list)  # Output: [1, 2, 3, 'hello', 4, 5]

# 6. Filtering Characters in a String
sentence = "This is an example sentence."
vowels = list(filter(lambda char: char in 'aeiou', sentence))
print("Vowels in the sentence:", vowels)  # Output: ['i', 'i', 'a', 'e', 'a', 'e', 'e', 'e']

# 7. Filtering with a Custom Function
def is_prime(n):
    """Function to check if a number is prime."""
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

primes = list(filter(is_prime, numbers))
print("Prime numbers:", primes)  # Output: [2, 3, 5, 7]

# 8. Filtering Unique Items from a List
items = [1, 2, 2, 3, 4, 4, 5, 5, 5]
unique_items = list(filter(lambda x: items.count(x) == 1, items))
print("Unique items:", unique_items)  # Output: [1, 3]

# 9. Filtering Dictionaries by Key
dicts = [
    {'name': 'Alice', 'score': 90},
    {'name': 'Bob', 'score': 85},
    {'name': 'Charlie', 'score': 95}
]
high_scorers = list(filter(lambda d: d['score'] > 90, dicts))
print("High scorers:", high_scorers)
# Output: [{'name': 'Charlie', 'score': 95}]

# 10. Combining filter and map
squared_even_numbers = list(map(lambda x: x * x, filter(is_even, numbers)))
print("Squared even numbers:", squared_even_numbers)  # Output: [4, 16, 36, 64, 100]

# 11. Filtering with Enumerate
def is_even_index(item):
    """Function to check if the index of the item is even."""
    index, value = item
    return index % 2 == 0

indexed_numbers = list(enumerate(numbers))
even_indexed_numbers = list(filter(is_even_index, indexed_numbers))
print("Even indexed numbers:", even_indexed_numbers)
# Output: [(0, 1), (2, 3), (4, 5), (6, 7), (8, 9)]

# 12. Filtering with List Comprehensions
filtered_list_comprehension = [x for x in numbers if x % 2 == 0]
print("Filtered list using list comprehension:", filtered_list_comprehension)  # Output: [2, 4, 6, 8, 10]
