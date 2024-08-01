-- Logical Operators

-- Variables for logical operations
local a = true
local b = false

-- 1. Logical AND (and)
local andResult = a and b
print("Logical AND (a and b):", andResult)  -- Output: Logical AND (a and b): false

-- 2. Logical OR (or)
local orResult = a or b
print("Logical OR (a or b):", orResult)  -- Output: Logical OR (a or b): true

-- 3. Logical NOT (not)
local notResultA = not a
local notResultB = not b
print("Logical NOT (not a):", notResultA)  -- Output: Logical NOT (not a): false
print("Logical NOT (not b):", notResultB)  -- Output: Logical NOT (not b): true

-- Using logical operators in conditional statements
local x = 15
local y = 25

-- 4. Logical AND in if statement
if x < 20 and y > 20 then
    print("Both conditions are true (x < 20 and y > 20)")  -- Output: Both conditions are true (x < 20 and y > 20)
else
    print("One or both conditions are false")
end

-- 5. Logical OR in if statement
if x > 20 or y > 20 then
    print("At least one condition is true (x > 20 or y > 20)")  -- Output: At least one condition is true (x > 20 or y > 20)
else
    print("Both conditions are false")
end

-- 6. Logical NOT in if statement
if not (x > 20) then
    print("Condition is false (not (x > 20))")  -- Output: Condition is false (not (x > 20))
else
    print("Condition is true")
end

-- Combining logical operators
local z = 30

-- 7. Combining AND, OR, and NOT
if (x < y or y < z) and not (x > z) then
    print("Complex condition is true ((x < y or y < z) and not (x > z))")  -- Output: Complex condition is true ((x < y or y < z) and not (x > z))
else
    print("Complex condition is false")
end
