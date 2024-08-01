-- This script demonstrates creating and using functions in Lua, including variable arguments

-- 1. Basic Function
function greet()
    print("Hello, World!")
end

print("Basic Function:")
greet()

-- Output:
-- Basic Function:
-- Hello, World!

-- 2. Function with Parameters
function greetPerson(name)
    print("Hello, " .. name .. "!")
end

print("\nFunction with Parameters:")
greetPerson("Alice")

-- Output:
-- Function with Parameters:
-- Hello, Alice!

-- 3. Function with Return Values
function add(a, b)
    return a + b
end

local sum = add(5, 7)
print("\nFunction with Return Values:")
print("Sum of 5 and 7 is:", sum)

-- Output:
-- Function with Return Values:
-- Sum of 5 and 7 is: 12

-- 4. Function with Multiple Return Values
function getMinMax(a, b)
    if a < b then
        return a, b
    else
        return b, a
    end
end

local min, max = getMinMax(10, 20)
print("\nFunction with Multiple Return Values:")
print("Min:", min, "Max:", max)

-- Output:
-- Function with Multiple Return Values:
-- Min: 10 Max: 20

-- 5. Local Variables in Functions
function localVariableExample()
    local localVar = "I am local to this function"
    print(localVar)
end

print("\nLocal Variables in Functions:")
localVariableExample()
-- Uncommenting the next line will cause an error because localVar is not accessible outside the function
-- print(localVar)

-- Output:
-- Local Variables in Functions:
-- I am local to this function

-- 6. Global Variables in Functions
globalVar = "I am global"

function globalVariableExample()
    print(globalVar)
end

print("\nGlobal Variables in Functions:")
globalVariableExample()

-- Output:
-- Global Variables in Functions:
-- I am global

-- 7. Function as a Variable
local function multiply(x, y)
    return x * y
end

local result = multiply(4, 5)
print("\nFunction as a Variable:")
print("Product of 4 and 5 is:", result)

-- Output:
-- Function as a Variable:
-- Product of 4 and 5 is: 20

-- 8. Function with Variable Arguments (...)
function printArgs(...)
    local args = {...}  -- Collect all arguments into a table
    print("Number of arguments:", #args)
    for i, arg in ipairs(args) do
        print("Argument " .. i .. ":", arg)
    end
end

print("\nFunction with Variable Arguments:")
printArgs("apple", "banana", "cherry", 42, true)

-- Output:
-- Function with Variable Arguments:
-- Number of arguments: 5
-- Argument 1: apple
-- Argument 2: banana
-- Argument 3: cherry
-- Argument 4: 42
-- Argument 5: true
