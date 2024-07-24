# If Elif Else

num = 15

# if statement
if num > 10:
    # Executes this block if num is greater than 10
    print("The number is greater than 10")

# if-else statement
if num % 2 == 0:
    # Executes this block if num is even
    print("The number is even")
else:
    # Executes this block if num is not even (i.e., odd)
    print("The number is odd")

# if-elif-else statement
if num < 0:
    # Executes this block if num is less than 0
    print("The number is negative")
elif num == 0:
    # Executes this block if num is equal to 0
    print("The number is zero")
elif num > 0 and num <= 10:
    # Executes this block if num is between 1 and 10 (inclusive)
    print("The number is between 1 and 10")
else:
    # Executes this block if none of the above conditions are met
    print("The number is greater than 10 but not greater than 20")
