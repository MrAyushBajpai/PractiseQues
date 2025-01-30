#include <iostream>

// Define or comment DEBUG to enable or disable debugging and logging
#define DEBUG

void logMessage(const std::string& message) {
#if defined(DEBUG)
    std::cout << "DEBUG: " << message << std::endl;
#else
    // In release mode, logging is disabled
#endif
}

void performComputation(int value) {
#if defined(DEBUG)
    std::cout << "Starting computation with value: " << value << std::endl;
#endif

    // Perform some computation
    int result = value * value;

#if defined(DEBUG)
    std::cout << "Computation result: " << result << std::endl;
#endif

    // Further computation or processing...
    logMessage("Computation completed.");
}

int main() {
    std::cout << "Program started." << std::endl;

    performComputation(5);

    std::cout << "Program finished." << std::endl;

    return 0;
}
