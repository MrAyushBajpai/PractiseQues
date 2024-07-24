# For Loop

# 1. Iterating over a list
my_list = [1, 2, 3, 4, 5]
print("Iterating over a list:")
for item in my_list:
    print(item)
    
# 2. Iterating over a range of numbers
print("\nIterating over a range of numbers:")
for i in range(1, 6):  # Range from 1 to 5 (6 is not included)
    print(i)

# 3. Iterating over a dictionary
my_dict = {'a': 1, 'b': 2, 'c': 3}
print("\nIterating over a dictionary:")
for key, value in my_dict.items():
    print(f"Key: {key}, Value: {value}")

# 4. Nested for loop
print("\nNested for loop:")
for i in range(3):  # Outer loop
    for j in range(2):  # Inner loop
        print(f"i = {i}, j = {j}")
