# Membership Operator

my_list = [1, 2, 3, 4, 5]
my_string = "Hello, World!"
my_dict = {'a': 1, 'b': 2, 'c': 3}

# Membership operator 'in'
is_in_list = 3 in my_list
# Checks if 3 is an element of my_list, results in True
print("3 in my_list:", is_in_list)

is_in_string = 'H' in my_string
# Checks if 'H' is a character in my_string, results in True
print("'H' in my_string:", is_in_string)

is_in_dict_keys = 'b' in my_dict
# Checks if 'b' is a key in my_dict, results in True
print("'b' in my_dict keys:", is_in_dict_keys)

is_in_dict_values = 2 in my_dict.values()
# Checks if 2 is a value in my_dict, results in True
print("2 in my_dict values:", is_in_dict_values)

# Membership operator 'not in'
is_not_in_list = 6 not in my_list
# Checks if 6 is not an element of my_list, results in True
print("6 not in my_list:", is_not_in_list)

is_not_in_string = 'x' not in my_string
# Checks if 'x' is not a character in my_string, results in True
print("'x' not in my_string:", is_not_in_string)

is_not_in_dict_keys = 'd' not in my_dict
# Checks if 'd' is not a key in my_dict, results in True
print("'d' not in my_dict keys:", is_not_in_dict_keys)

is_not_in_dict_values = 4 not in my_dict.values()
# Checks if 4 is not a value in my_dict, results in True
print("4 not in my_dict values:", is_not_in_dict_values)
