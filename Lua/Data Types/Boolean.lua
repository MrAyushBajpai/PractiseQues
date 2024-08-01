-- Boolean Data Type

-- 1. Defining Boolean Values
local trueValue = true
local falseValue = false

print("1. Defining Boolean Values:")
print("True value:", trueValue)
print("False value:", falseValue)

-- Output:
-- 1. Defining Boolean Values:
-- True value: true
-- False value: false

-- 2. Basic Boolean Operations
local a = true
local b = false

print("\n2. Basic Boolean Operations:")
print("AND (a and b):", a and b)
print("OR (a or b):", a or b)
print("NOT (not a):", not a)
print("NOT (not b):", not b)

-- Output:
-- 2. Basic Boolean Operations:
-- AND (a and b): false
-- OR (a or b): true
-- NOT (not a): false
-- NOT (not b): true

-- 3. Boolean in Conditional Statements
print("\n3. Boolean in Conditional Statements:")
if a then
    print("a is true")
else
    print("a is false")
end

if not b then
    print("b is false")
else
    print("b is true")
end

-- Output:
-- 3. Boolean in Conditional Statements:
-- a is true
-- b is false

-- 4. Boolean in Functions
function isEvenNumber(num)
    return num % 2 == 0
end

local number = 4
print("\n4. Boolean in Functions:")
print("Is", number, "an even number?", isEvenNumber(number))

-- Output:
-- 4. Boolean in Functions:
-- Is 4 an even number? true

-- 5. Boolean with Comparison Operators
local x = 5
local y = 10

print("\n5. Boolean with Comparison Operators:")
print("x == y:", x == y)
print("x ~= y:", x ~= y)
print("x < y:", x < y)
print("x > y:", x > y)

-- Output:
-- 5. Boolean with Comparison Operators:
-- x == y: false
-- x ~= y: true
-- x < y: true
-- x > y: false

-- 6. Using Boolean Values in Tables
local myTable = {
    isAvailable = true,
    isAdmin = false
}

print("\n6. Using Boolean Values in Tables:")
print("isAvailable:", myTable.isAvailable)
print("isAdmin:", myTable.isAdmin)

-- Output:
-- 6. Using Boolean Values in Tables:
-- isAvailable: true
-- isAdmin: false

-- 7. Boolean in Loops
print("\n7. Boolean in Loops:")
local count = 1
while count <= 5 do
    print("Count is:", count)
    count = count + 1
end

-- Output:
-- 7. Boolean in Loops:
-- Count is: 1
-- Count is: 2
-- Count is: 3
-- Count is: 4
-- Count is: 5

-- 8. Boolean Short-Circuit Evaluation
print("\n8. Boolean Short-Circuit Evaluation:")
local function alwaysTrue()
    print("This function always returns true")
    return true
end

local function alwaysFalse()
    print("This function always returns false")
    return false
end

-- Short-circuit evaluation: alwaysTrue() is not called because alwaysFalse() is already false
print("Result of (alwaysFalse() and alwaysTrue()):", alwaysFalse() and alwaysTrue())

-- Short-circuit evaluation: alwaysTrue() is called because alwaysTrue() is true
print("Result of (alwaysTrue() or alwaysFalse()):", alwaysTrue() or alwaysFalse())

-- Output:
-- 8. Boolean Short-Circuit Evaluation:
-- This function always returns false
-- Result of (alwaysFalse() and alwaysTrue()): false
-- This function always returns true
-- Result of (alwaysTrue() or alwaysFalse()): true
