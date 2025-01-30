#include <iostream>

// Include guards to prevent multiple inclusions
#ifndef EXAMPLE_CPP
#define EXAMPLE_CPP

// Function declaration
void printMessage();

#endif // EXAMPLE_CPP

// Function definition
void printMessage() {
    std::cout << "Hello from the example function!" << std::endl;
}

int main() {
    printMessage();
    return 0;
}
