# Bitwise Operators

a = 10  # Binary: 1010
b = 5   # Binary: 0101

# Bitwise AND
bitwise_and = a & b
# 1010 & 0101 results in 0000 (binary), which is 0 (decimal)
print("Bitwise AND:", bitwise_and)

# Bitwise OR
bitwise_or = a | b
# 1010 | 0101 results in 1111 (binary), which is 15 (decimal)
print("Bitwise OR:", bitwise_or)

# Bitwise XOR (exclusive OR)
bitwise_xor = a ^ b
# 1010 ^ 0101 results in 1111 (binary), which is 15 (decimal)
print("Bitwise XOR:", bitwise_xor)

# Bitwise NOT
bitwise_not_a = ~a
# ~1010 results in ...11111111111111111111111111110101 (binary, 32-bit), which is -11 (decimal)
print("Bitwise NOT (a):", bitwise_not_a)

# Bitwise left shift
left_shift = a << 2
# 1010 << 2 results in 101000 (binary), which is 40 (decimal)
print("Bitwise Left Shift:", left_shift)

# Bitwise right shift
right_shift = a >> 2
# 1010 >> 2 results in 0010 (binary), which is 2 (decimal)
print("Bitwise Right Shift:", right_shift)
