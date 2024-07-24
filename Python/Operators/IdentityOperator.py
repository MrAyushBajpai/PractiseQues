# Identity Operator

a = 10
b = 10

# Define two lists with the same elements
list1 = [1, 2, 3]
list2 = [1, 2, 3]

# Define a variable as a reference to another variable
c = a

# Identity operator 'is'
is_same_object_ab = a is b
# Checks if a and b are the same object in memory, results in True
print("a is b:", is_same_object_ab)

is_same_object_list1_list2 = list1 is list2
# Checks if list1 and list2 are the same object in memory, results in False
print("list1 is list2:", is_same_object_list1_list2)

is_same_object_ac = a is c
# Checks if a and c are the same object in memory, results in True
print("a is c:", is_same_object_ac)

# Identity operator 'is not'
is_not_same_object_ab = a is not b
# Checks if a and b are not the same object in memory, results in False
print("a is not b:", is_not_same_object_ab)

is_not_same_object_list1_list2 = list1 is not list2
# Checks if list1 and list2 are not the same object in memory, results in True
print("list1 is not list2:", is_not_same_object_list1_list2)

is_not_same_object_ac = a is not c
# Checks if a and c are not the same object in memory, results in False
print("a is not c:", is_not_same_object_ac)
