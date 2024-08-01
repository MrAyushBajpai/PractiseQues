-- This script demonstrates the concepts of lvalues and rvalues in Lua

-- 1. Assigning a value to a variable (lvalue = rvalue)
local x  -- x is an lvalue (a location in memory)
x = 10  -- 10 is an rvalue (a value to be stored in x)
print("Value of x:", x)  -- Output: Value of x: 10

-- 2. Using lvalues and rvalues in expressions
local y = 20  -- y is an lvalue, 20 is an rvalue
local sum = x + y  -- x and y are rvalues in this context, sum is an lvalue
print("Sum of x and y:", sum)  -- Output: Sum of x and y: 30

-- 3. Reassigning a variable (lvalue = rvalue)
x = x + 5  -- x is an lvalue on the left side, x + 5 is an rvalue on the right side
print("New value of x:", x)  -- Output: New value of x: 15

-- 4. Assigning table elements (lvalue = rvalue)
local tbl = {}  -- tbl is an lvalue (a table)
tbl[1] = "Hello"  -- tbl[1] is an lvalue, "Hello" is an rvalue
tbl[2] = "Lua"  -- tbl[2] is an lvalue, "Lua" is an rvalue
print("Table elements:", tbl[1], tbl[2])  -- Output: Table elements: Hello Lua

-- 5. Swapping values using lvalues and rvalues
local a, b = 1, 2  -- a and b are lvalues, 1 and 2 are rvalues
a, b = b, a  -- swapping values, b and a are rvalues on the right side, a and b are lvalues on the left side
print("Swapped values: a =", a, "b =", b)  -- Output: Swapped values: a = 2 b = 1

-- 6. Incrementing values (lvalue = lvalue + rvalue)
local count = 0  -- count is an lvalue
count = count + 1  -- count is an lvalue on the left side, count + 1 is an rvalue
print("Incremented count:", count)  -- Output: Incremented count: 1

-- 7. Using functions as rvalues
local function square(n)  -- square is an lvalue (a function)
    return n * n  -- n * n is an rvalue (a value to be returned)
end
local result = square(4)  -- square(4) is an rvalue, result is an lvalue
print("Square of 4:", result)  -- Output: Square of 4: 16

-- 8. Assigning functions to variables (lvalue = rvalue)
local greet  -- greet is an lvalue
greet = function(name)  -- function is an rvalue
    return "Hello, " .. name  -- "Hello, " .. name is an rvalue
end
print(greet("Lua"))  -- Output: Hello, Lua
