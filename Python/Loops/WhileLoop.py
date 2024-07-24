# While Loop

# 1. Basic while loop
counter = 0
print("Basic while loop:")
while counter < 5:
    print(counter)
    counter += 1  # Increment the counter

# 2. While loop with condition
print("\nWhile loop with condition:")
num = 10
while num > 0:
    print(num)
    num -= 2  # Decrement num by 2 each iteration

# 3. While loop with break statement
print("\nWhile loop with break statement:")
i = 0
while True:  # Infinite loop
    if i == 3:
        break  # Exit the loop when i equals 3
    print(i)
    i += 1

# 4. While loop with continue statement
print("\nWhile loop with continue statement:")
j = 0
while j < 5:
    j += 1
    if j == 3:
        continue  # Skip the rest of the loop when j equals 3
    print(j)
