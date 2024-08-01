-- Operator Precedence

-- Variables for demonstration
local a = 5
local b = 10
local c = 20

-- 1. Arithmetic Operators
local result1 = a + b * c
print("Result of a + b * c (b * c is evaluated first):", result1)  -- Output: 205

-- Use parentheses to change precedence
local result2 = (a + b) * c
print("Result of (a + b) * c (a + b is evaluated first):", result2)  -- Output: 300

-- 2. Relational Operators
local result3 = a < b and b < c
print("Result of a < b and b < c (relational before logical):", result3)  -- Output: true

-- 3. Logical Operators
local result4 = not a < b  -- 'not' has higher precedence than '<'
print("Result of not a < b (not is evaluated first):", result4)  -- Output: false

-- Use parentheses to change precedence
local result5 = not (a < b)
print("Result of not (a < b) (a < b is evaluated first):", result5)  -- Output: false

-- 4. Concatenation Operator
local str1 = "Hello"
local str2 = "World"
local result6 = str1 .. " " .. str2
print("Result of str1 .. ' ' .. str2 (concatenation from left to right):", result6)  -- Output: Hello World

-- 5. Mixing Different Operators
local result7 = a + b > c and not (a > b)
print("Result of a + b > c and not (a > b):", result7)  -- Output: false

-- 6. Length Operator
local lengthStr = #"Hello"
local result8 = lengthStr + a
print("Result of #\"Hello\" + a (length evaluated first):", result8)  -- Output: 10

-- Combining everything to show precedence
local complexResult = (a + b) * c / (a - b) + a^2 - b % a
print("Complex expression ((a + b) * c / (a - b) + a^2 - b % a):", complexResult)

-- Explanation of complex expression
-- ((a + b) * c / (a - b) + a^2 - b % a)
-- 1. (a + b) -> 15
-- 2. (a - b) -> -5
-- 3. a^2 -> 25
-- 4. b % a -> 0
-- 5. (a + b) * c -> 300
-- 6. 300 / (a - b) -> 300 / -5 -> -60
-- 7. -60 + a^2 -> -60 + 25 -> -35
-- 8. -35 - b % a -> -35 - 0 -> -35
print("Explanation: ((a + b) * c / (a - b) + a^2 - b % a) ->", complexResult)
