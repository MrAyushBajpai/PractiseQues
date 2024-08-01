-- Local Scope in Function

function localVariableExample()
    local localVar = "I am local to this function"
    print(localVar)
end

print("\nLocal Variables in Functions:")
localVariableExample()

-- Global Scope in function

globalVar = "I am global"

function globalVariableExample()
    print(globalVar)
end

print("\nGlobal Variables in Functions:")
globalVariableExample()