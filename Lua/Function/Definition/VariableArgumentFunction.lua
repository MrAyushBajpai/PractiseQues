-- Function with variable arguments

function printArgs(...)
    local args = {...}  -- Collect all arguments into a table
    print("Number of arguments:", #args)
    for i, arg in ipairs(args) do
        print("Argument " .. i .. ":", arg)
    end
end

print("\nFunction with Variable Arguments:")
printArgs("apple", "banana", "cherry", 42, true)