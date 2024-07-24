# Break Continue Pass

print("Using break statement:")
for i in range(5):
    if i == 3:
        print("Breaking at i =", i)
        break  # Exit the loop when i equals 3
    print(i)

# 2. Using continue statement
print("\nUsing continue statement:")
for i in range(5):
    if i == 3:
        print("Skipping i =", i)
        continue  # Skip the rest of the loop when i equals 3
    print(i)

# 3. Using pass statement
print("\nUsing pass statement:")
for i in range(5):
    if i == 3:
        # Do nothing (pass)
        pass
    else:
        print(i)
