# Ternary Conditional

num = 15

# One-liner if-else statement
result = "The number is greater than 10" if num > 10 else "The number is 10 or less"
print(result)

# One-liner if-elif-else statement
result = (
    "The number is negative" if num < 0
    else "The number is zero" if num == 0
    else "The number is between 1 and 10" if num > 0 and num <= 10
    else "The number is greater than 10"
)
print(result)
