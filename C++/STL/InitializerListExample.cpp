#include <iostream>
#include <vector>
#include <array>

int main() {
    // Initializing a std::vector using an initializer list
    // We use curly braces {} to directly specify the elements of the vector at initialization.
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Display the elements of the vector
    std::cout << "Vector Elements: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Adding elements to a vector using an initializer list
    // We use the insert() method to add multiple elements at once.
    numbers.insert(numbers.end(), {6, 7, 8}); // Adding elements at the end of the vector

    // Display the elements of the vector after inserting new elements
    std::cout << "Vector Elements after insertion: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Initializing a std::array using an initializer list
    // Arrays require the size to be specified and are initialized similarly with curly braces.
    std::array<int, 5> fixedArray = {10, 20, 30, 40, 50};

    // Display the elements of the array
    std::cout << "Array Elements: ";
    for (const auto& num : fixedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using an initializer list to directly assign values to a vector
    // Instead of initializing at declaration, we assign a new list of values.
    numbers = {100, 200, 300};

    // Display the updated vector elements
    std::cout << "Vector Elements after reassigning: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
