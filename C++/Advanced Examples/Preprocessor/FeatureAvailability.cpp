#include <iostream>

// Check if the compiler supports C++17 or later
#if __cplusplus >= 201703L
    #define FEATURE_SUPPORTED 1
#else
    #define FEATURE_SUPPORTED 0
#endif

// Include the necessary headers if the feature is supported
#if FEATURE_SUPPORTED
    #include <optional>
    #include <string>
#else
    #include <string>
#endif

void demonstrateFeature() {
#if FEATURE_SUPPORTED
    // Code using std::optional (C++17 feature)
    std::optional<std::string> maybeString = "Hello, C++17!";
    if (maybeString) {
        std::cout << "Feature Supported: " << *maybeString << std::endl;
    } else {
        std::cout << "No value present" << std::endl;
    }
#else
    // Code for environments without std::optional
    std::cout << "Feature not supported. Using fallback implementation." << std::endl;
#endif
}

int main() {
    std::cout << "Running feature availability example" << std::endl;
    demonstrateFeature();
    return 0;
}