-- Function with single return value
function add(a, b)
    return a + b
end

local sum = add(5, 7)
print("\nFunction with Return Values:")
print("Sum of 5 and 7 is:", sum)


-- Function with multiple return value
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