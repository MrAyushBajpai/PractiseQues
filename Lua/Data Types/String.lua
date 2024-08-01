-- This script demonstrates various aspects of the string data type in Lua

-- 1. Defining Strings
local singleQuoteString = 'Hello, Lua!'
local doubleQuoteString = "Hello, Lua!"
local multilineString = [[
This is a
multiline string.
]]

print("1. Defining Strings:")
print("Single quote string:", singleQuoteString)
print("Double quote string:", doubleQuoteString)
print("Multiline string:", multilineString)

-- Output:
-- 1. Defining Strings:
-- Single quote string: Hello, Lua!
-- Double quote string: Hello, Lua!
-- Multiline string:
-- This is a
-- multiline string.

-- 2. String Concatenation
local part1 = "Hello"
local part2 = "World"
local concatenatedString = part1 .. " " .. part2

print("\n2. String Concatenation:")
print("Concatenated string:", concatenatedString)

-- Output:
-- 2. String Concatenation:
-- Concatenated string: Hello World

-- 3. String Length
local str = "Lua programming"
local length = #str

print("\n3. String Length:")
print("Length of string '", str, "' is:", length)

-- Output:
-- 3. String Length:
-- Length of string ' Lua programming ' is: 15

-- 4. String Substring
local substring = string.sub(str, 1, 3)  -- Extracts substring from index 1 to 3

print("\n4. String Substring:")
print("Substring of '", str, "' from 1 to 3 is:", substring)

-- Output:
-- 4. String Substring:
-- Substring of ' Lua programming ' from 1 to 3 is: Lua

-- 5. String Find
local findPosition = string.find(str, "programming")  -- Finds the position of the substring

print("\n5. String Find:")
print("Position of 'programming' in '", str, "' is:", findPosition)

-- Output:
-- 5. String Find:
-- Position of 'programming' in ' Lua programming ' is: 5

-- 6. String Replace
local replacedString = string.gsub(str, "programming", "scripting")  -- Replaces substring

print("\n6. String Replace:")
print("Replaced string:", replacedString)

-- Output:
-- 6. String Replace:
-- Replaced string: Lua scripting

-- 7. String Uppercase and Lowercase
local upperStr = string.upper(str)
local lowerStr = string.lower(str)

print("\n7. String Uppercase and Lowercase:")
print("Uppercase string:", upperStr)
print("Lowercase string:", lowerStr)

-- Output:
-- 7. String Uppercase and Lowercase:
-- Uppercase string: LUA PROGRAMMING
-- Lowercase string: lua programming

-- 8. String Formatting
local name = "Alice"
local age = 30
local formattedString = string.format("Name: %s, Age: %d", name, age)

print("\n8. String Formatting:")
print("Formatted string:", formattedString)

-- Output:
-- 8. String Formatting:
-- Formatted string: Name: Alice, Age: 30

-- 9. String Pattern Matching
local strWithPattern = "Lua 5.4"
local version = string.match(strWithPattern, "%d+.%d+")  -- Matches version pattern

print("\n9. String Pattern Matching:")
print("Extracted version from '", strWithPattern, "' is:", version)

-- Output:
-- 9. String Pattern Matching:
-- Extracted version from ' Lua 5.4 ' is: 5.4

-- 10. String Splitting (using gmatch)
local strToSplit = "apple,banana,cherry"
local fruits = {}

for fruit in string.gmatch(strToSplit, "([^,]+)") do
    table.insert(fruits, fruit)
end

print("\n10. String Splitting:")
print("Fruits list:")
for i, fruit in ipairs(fruits) do
    print(i, fruit)
end

-- Output:
-- 10. String Splitting:
-- Fruits list:
-- 1 apple
-- 2 banana
-- 3 cherry
