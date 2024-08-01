-- Number Data Type

-- 1. Defining Numbers
local intNum = 42        -- Integer
local floatNum = 3.14    -- Floating-point number

print("1. Defining Numbers:")
print("Integer number:", intNum)
print("Floating-point number:", floatNum)


-- 2. Basic Arithmetic Operations
local a = 10
local b = 3

print("\n2. Basic Arithmetic Operations:")
print("Addition: ", a + b)
print("Subtraction: ", a - b)
print("Multiplication: ", a * b)
print("Division: ", a / b)
print("Modulus: ", a % b)
print("Exponentiation: ", a ^ b)


-- 3. Numeric Functions
print("\n3. Numeric Functions:")
print("Absolute value of -5:", math.abs(-5))
print("Square root of 16:", math.sqrt(16))
print("Ceiling of 3.7:", math.ceil(3.7))
print("Floor of 3.7:", math.floor(3.7))
print("Rounded value of 3.5:", math.floor(3.5 + 0.5))  -- Rounding to the nearest integer


-- 4. Number Conversion
local numStr = "123.45"
local num = tonumber(numStr)  -- Convert string to number
print("\n4. Number Conversion:")
print("String to number:", num)
print("Type of converted number:", type(num))


-- 5. Numeric Type Checking
print("\n5. Numeric Type Checking:")
print("Is intNum a number?", type(intNum) == "number")
print("Is floatNum a number?", type(floatNum) == "number")


-- 6. Using Numbers in Functions
function calculateRectangleArea(length, width)
    return length * width
end

local length = 5
local width = 10
local area = calculateRectangleArea(length, width)
print("\n6. Using Numbers in Functions:")
print("Area of a rectangle with length", length, "and width", width, "is:", area)


-- 7. Handling Edge Cases
local negativeNumber = -42
local largeNumber = 1e+10  -- Scientific notation for 10000000000

print("\n7. Handling Edge Cases:")
print("Negative number:", negativeNumber)
print("Large number:", largeNumber)


-- 8. Number Comparisons
local num1 = 5
local num2 = 8

print("\n8. Number Comparisons:")
print("num1 < num2:", num1 < num2)
print("num1 > num2:", num1 > num2)
print("num1 == num2:", num1 == num2)
print("num1 ~= num2:", num1 ~= num2)
