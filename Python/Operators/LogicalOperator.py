# Logical Operators

a = True
b = False

# Logical AND
logical_and = a and b
# True AND False results in False
print("Logical AND:", logical_and)

# Logical OR
logical_or = a or b
# True OR False results in True
print("Logical OR:", logical_or)

# Logical NOT
logical_not_a = not a
# NOT True results in False
print("Logical NOT (a):", logical_not_a)

logical_not_b = not b
# NOT False results in True
print("Logical NOT (b):", logical_not_b)

# Combining Logical Operators
combined = (a and b) or (not a and not b)
# (True AND False) OR (NOT True AND NOT False)
# False OR False results in False
print("Combined Logical Operators:", combined)
