# Variable Scoping

# Global variable
global_var = "I am a global variable"

def local_scope_example():
    """Function demonstrating local scope."""
    # Local variable
    local_var = "I am a local variable"
    print("Inside function:")
    print("Local variable:", local_var)
    print("Global variable:", global_var)

def modify_global():
    """Function that modifies the global variable."""
    global global_var
    global_var = "I have been modified"

def use_global():
    """Function that uses the global variable."""
    print("Inside function:")
    print("Global variable:", global_var)

# Call the local scope example function
local_scope_example()

# Call the function that modifies the global variable
modify_global()

# Call the function that uses the global variable
use_global()

# Attempt to print the local variable outside the function
try:
    print("Outside function:")
    print("Local variable:", local_var)  # This will raise an error
except NameError as e:
    print("Error:", e)
