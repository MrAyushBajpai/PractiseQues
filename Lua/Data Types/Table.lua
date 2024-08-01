-- Table Data Type

-- 1. Creating Tables
local emptyTable = {}  -- An empty table
local tableWithValues = {1, 2, 3, 4, 5}  -- A table with initial values
local tableWithKeys = {name = "Alice", age = 30, isStudent = false}

print("1. Creating Tables:")
print("Empty table:", emptyTable)
print("Table with values:", tableWithValues[1], tableWithValues[2], tableWithValues[3])
print("Table with keys - name:", tableWithKeys.name, "age:", tableWithKeys.age)


-- 2. Accessing and Modifying Table Elements
local t = {10, 20, 30}
print("\n2. Accessing and Modifying Table Elements:")
print("Original table:")
for i, v in ipairs(t) do
    print(i, v)
end

-- Modify an element
t[2] = 25

print("Modified table:")
for i, v in ipairs(t) do
    print(i, v)
end


-- 3. Adding Key-Value Pairs
local person = {}
person.name = "Bob"
person.age = 40
person["isStudent"] = true

print("\n3. Adding Key-Value Pairs:")
print("Name:", person.name)
print("Age:", person.age)
print("Is Student:", person["isStudent"])


-- 4. Iterating Over Tables
print("\n4. Iterating Over Tables:")

-- Iterate over numeric indices
print("Numeric indices:")
for i, v in ipairs(tableWithValues) do
    print(i, v)
end

-- Iterate over key-value pairs
print("Key-value pairs:")
for k, v in pairs(tableWithKeys) do
    print(k, v)
end


-- 5. Nested Tables
local nestedTable = {
    name = "Charlie",
    contact = {
        email = "charlie@example.com",
        phone = "123-456-7890"
    },
    hobbies = {"reading", "cycling", "hiking"}
}

print("\n5. Nested Tables:")
print("Name:", nestedTable.name)
print("Email:", nestedTable.contact.email)
print("Phone:", nestedTable.contact.phone)
print("Hobbies:")
for i, hobby in ipairs(nestedTable.hobbies) do
    print(i, hobby)
end


-- 6. Table Length
local lenTable = {1, 2, 3, 4, 5}
print("\n6. Table Length:")
print("Length of lenTable:", #lenTable)


-- 7. Merging Tables
local t1 = {a = 1, b = 2}
local t2 = {b = 3, c = 4}

print("\n7. Merging Tables:")
-- Merging t2 into t1
for k, v in pairs(t2) do
    t1[k] = v
end

-- Display merged table
for k, v in pairs(t1) do
    print(k, v)
end


-- 8. Table Metatables
local mt = {
    __add = function(a, b)
        local result = {}
        for i = 1, math.min(#a, #b) do
            result[i] = a[i] + b[i]
        end
        return result
    end
}

local mt1 = {1, 2, 3}
local mt2 = {4, 5, 6}

setmetatable(mt1, mt)
setmetatable(mt2, mt)

local mtResult = mt1 + mt2

print("\n8. Table Metatables:")
print("Result of mt1 + mt2:")
for i, v in ipairs(mtResult) do
    print(i, v)
end
