-- Breaking out of a loop
print("Break in loop:")
for i = 1, 5 do
    if i == 3 then
        break
    end
    print("i:", i)
end

-- Continuing to the next iteration
print("Continue in loop:")
for i = 1, 5 do
    if i == 3 then
        goto continue
    end
    print("i:", i)
    ::continue::
end