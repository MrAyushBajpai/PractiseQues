-- For Loop (numeric)
print("For loop (numeric):")
for i = 1, 5 do
    print("i:", i)
end

-- For Loop (generic)
local fruits = {"apple", "banana", "cherry"}
print("For loop (generic):")
for index, fruit in ipairs(fruits) do
    print("Index:", index, "Fruit:", fruit)
end