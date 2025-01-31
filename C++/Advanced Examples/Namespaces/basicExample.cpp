#include <iostream>

namespace MathOperation{
    int add(int a, int b){
        return a + b;
    }

    int subtract(int a, int b){
        return a - b;
    }

    int multiply(int a, int b){
        return a * b;
    }

    int divide(int a, int b){
        return a/b;
    }
}

namespace StringOperation{
    void printHello(){
        std::cout << "Hello from the StringOperation" << std::endl;
    }
}

int main(){
    std::cout << "Sum: " << MathOperation::add(5, 10) << std::endl;
    std::cout << "Difference: " << MathOperation::subtract(40, 8) << std::endl;
    std::cout << "Product: " << MathOperation::multiply(15, 3) << std::endl;
    std::cout << "Quotient: " << MathOperation::divide(100, 20) << std::endl;

    StringOperation::printHello();
}