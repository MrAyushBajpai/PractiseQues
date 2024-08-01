-- Relational Operators

-- Variables for comparison
local a = 10
local b = 20

-- 1. Equality (==)
local isEqual = (a == b)
print("Equality (a == b):", isEqual)  -- Output: Equality (a == b): false

-- 2. Inequality (~=)
local isNotEqual = (a ~= b)
print("Inequality (a ~= b):", isNotEqual)  -- Output: Inequality (a ~= b): true

-- 3. Less than (<)
local isLessThan = (a < b)
print("Less than (a < b):", isLessThan)  -- Output: Less than (a < b): true

-- 4. Greater than (>)
local isGreaterThan = (a > b)
print("Greater than (a > b):", isGreaterThan)  -- Output: Greater than (a > b): false

-- 5. Less than or equal to (<=)
local isLessThanOrEqual = (a <= b)
print("Less than or equal to (a <= b):", isLessThanOrEqual)  -- Output: Less than or equal to (a <= b): true

-- 6. Greater than or equal to (>=)
local isGreaterThanOrEqual = (a >= b)
print("Greater than or equal to (a >= b):", isGreaterThanOrEqual)  -- Output: Greater than or equal to (a >= b): false

-- Comparing strings
local str1 = "apple"
local str2 = "banana"

-- 7. String equality (==)
local areStringsEqual = (str1 == str2)
print("String equality (str1 == str2):", areStringsEqual)  -- Output: String equality (str1 == str2): false

-- 8. String inequality (~=)
local areStringsNotEqual = (str1 ~= str2)
print("String inequality (str1 ~= str2):", areStringsNotEqual)  -- Output: String inequality (str1 ~= str2): true

-- 9. String less than (<)
local isStringLessThan = (str1 < str2)
print("String less than (str1 < str2):", isStringLessThan)  -- Output: String less than (str1 < str2): true

-- 10. String greater than (>)
local isStringGreaterThan = (str1 > str2)
print("String greater than (str1 > str2):", isStringGreaterThan)  -- Output: String greater than (str1 > str2): false

-- Using relational operators in conditional statements
if a < b then
    print("a is less than b")  -- Output: a is less than b
elseif a == b then
    print("a is equal to b")
else
    print("a is greater than b")
end

-- Combining relational operators with logical operators
local x = 15
local y = 25

if x < y and a < b then
    print("Both conditions are true")  -- Output: Both conditions are true
else
    print("One or both conditions are false")
end
