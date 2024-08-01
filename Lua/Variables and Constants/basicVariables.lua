-- This script demonstrates various types of variable declarations in Lua

-- 1. Declaring a global variable
x = 10  -- x is a global variable
print("Global variable x:", x)  -- Output: Global variable x: 10

-- 2. Declaring a local variable
local y = 20  -- y is a local variable
print("Local variable y:", y)  -- Output: Local variable y: 20

-- 3. Declaring multiple variables in a single line
a, b, c = 1, 2, 3
print("Variables a, b, c:", a, b, c)  -- Output: Variables a, b, c: 1 2 3

-- 4. Declaring local variables in a single line
local p, q, r = 4, 5, 6
print("Local variables p, q, r:", p, q, r)  -- Output: Local variables p, q, r: 4 5 6

-- 5. Defaulting uninitialized variables to nil
local uninitialized
print("Uninitialized variable:", uninitialized)  -- Output: Uninitialized variable: nil

-- 6. Declaring variables with different data types
local str = "Hello, Lua"  -- string
local num = 42  -- number
local bool = true  -- boolean
local tbl = {1, 2, 3}  -- table (array)
local func = function() print("This is a function") end  -- function

print("String variable str:", str)  -- Output: String variable str: Hello, Lua
print("Number variable num:", num)  -- Output: Number variable num: 42
print("Boolean variable bool:", bool)  -- Output: Boolean variable bool: true
print("Table variable tbl:", tbl)  -- Output: Table variable tbl: table: <memory address>
print("Function variable func:", func)  -- Output: Function variable func: function: <memory address>

-- 7. Using variables in expressions
local sum = x + y
print("Sum of x and y:", sum)  -- Output: Sum of x and y: 30

local message = str .. "!"  -- concatenation
print("Concatenated message:", message)  -- Output: Concatenated message: Hello, Lua!
