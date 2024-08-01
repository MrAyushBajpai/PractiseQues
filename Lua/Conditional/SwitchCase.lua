-- Switch Case

local dayOfWeek = 3  -- Representing Wednesday

local daySwitch = {
    [1] = function() print("Today is Monday") end,
    [2] = function() print("Today is Tuesday") end,
    [3] = function() print("Today is Wednesday") end,
    [4] = function() print("Today is Thursday") end,
    [5] = function() print("Today is Friday") end,
    [6] = function() print("Today is Saturday") end,
    [7] = function() print("Today is Sunday") end
}

local caseFunction = daySwitch[dayOfWeek]
if caseFunction then
    caseFunction()
else
    print("Invalid day of the week")
end
