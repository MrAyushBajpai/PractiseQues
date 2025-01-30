#include <iostream>

// Define macros to enable or disable features
#define FEATURE_A_ENABLED
//#define FEATURE_B_ENABLED

void featureA() {
#ifdef FEATURE_A_ENABLED
    std::cout << "Feature A is enabled." << std::endl;
#else
    std::cout << "Feature A is disabled." << std::endl;
#endif
}

void featureB() {
#ifdef FEATURE_B_ENABLED
    std::cout << "Feature B is enabled." << std::endl;
#else
    std::cout << "Feature B is disabled." << std::endl;
#endif
}

int main() {
    std::cout << "Configuration options example:" << std::endl;

    featureA();
    featureB();

    return 0;
}
