-- nil Data Type

-- 1. Defining Nil Values
local a = nil
local b = 5

print("1. Defining Nil Values:")
print("Value of a:", a)
print("Value of b:", b)


-- 2. Nil in Conditional Statements
local function checkNil(value)
    if value == nil then
        return "Value is nil"
    else
        return "Value is not nil"
    end
end

print("\n2. Nil in Conditional Statements:")
print("Checking a:", checkNil(a))
print("Checking b:", checkNil(b))


-- 3. Nil in Tables
local myTable = {
    name = "Alice",
    age = nil  -- Explicitly setting a table field to nil
}

print("\n3. Nil in Tables:")
print("Name:", myTable.name)
print("Age:", myTable.age)  -- This will print nil
print("Age is nil?", myTable.age == nil)


-- 4. Using Nil to Remove Table Entries
local myTable2 = {
    name = "Bob",
    age = 30
}

print("\n4. Using Nil to Remove Table Entries:")
print("Before removing age:", myTable2.age)
myTable2.age = nil  -- Removing the age field
print("After removing age:", myTable2.age)  -- This will print nil


-- 5. Functions Returning Nil
local function findElement(list, element)
    for i, value in ipairs(list) do
        if value == element then
            return i
        end
    end
    return nil  -- Element not found
end

local myList = {1, 2, 3, 4, 5}
local index = findElement(myList, 3)
local notFound = findElement(myList, 6)

print("\n5. Functions Returning Nil:")
print("Index of 3:", index)  -- Should print the index (3)
print("Index of 6:", notFound)  -- Should print nil


-- 6. Nil Type Checking
print("\n6. Nil Type Checking:")
print("Type of a:", type(a))  -- Should print "nil"
print("Type of b:", type(b))  -- Should print "number"


-- 7. Nil and Default Values
local function getValueOrDefault(value, default)
    if value == nil then
        return default
    else
        return value
    end
end

local value = nil
local defaultValue = "Default"
print("\n7. Nil and Default Values:")
print("Value or Default:", getValueOrDefault(value, defaultValue))
