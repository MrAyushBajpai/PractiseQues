#include <iostream>

// Define macros to simulate different library versions
#define LIBRARY_VERSION 2

// Conditional compilation based on library version
#if LIBRARY_VERSION >= 2
    // Code for library version 2 and later
    void logMessage(const std::string& message) {
        std::cout << "Library v2+: " << message << std::endl;
    }
#else
    // Code for library version 1
    void logMessage(const std::string& message) {
        std::cout << "Library v1: " << message << std::endl;
    }
#endif

int main() {
    std::cout << "Backward compatibility example:" << std::endl;

    logMessage("Hello, World!");

    return 0;
}
