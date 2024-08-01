-- If Elseif Else Nested
local temperature = 25

print("If Elseif Else Nested Statement:")
if temperature >= 0 then
    print("Temperature is above freezing point.")
    if temperature > 30 then
        print("It's quite hot.")
    elseif temperature > 20 then
        print("It's warm.")
    else
        print("It's cool.")
    end
else
    print("Temperature is below freezing point.")
end