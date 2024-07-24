# Match Case

num = 15

# Match-case statement
match num:
    case x if x > 10:
        print("The number is greater than 10")
    case x if x % 2 == 0:
        print("The number is even")
    case x if x < 0:
        print("The number is negative")
    case 0:
        print("The number is zero")
    case x if 1 <= x <= 10:
        print("The number is between 1 and 10")
    case _:
        print("The number is greater than 10 but not in the expected range")
