#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;

    // This is an empty vector
    // vector<int> arr;
    // cout << "Is array empty?: " << arr.empty() << endl;


    // This is not an empty vector, and is initialized by default with 2 "n" times
    vector<int> arr(n, 2);
    cout << "Is array empty?: " << arr.empty() << endl;

    // Display the initial vector elements
    cout << "Initial Vector Elements: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl << "Initial Vector Size: " << arr.size() << endl;
    cout << "Initial Vector Capacity: " << arr.capacity() << endl << endl;

    // Doubles the size of vector, and adds 1 at the end
    arr.push_back(1);
    cout << "Vector Elements after push_back: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl << "Vector Size after push_back: " << arr.size() << endl;
    cout << "Vector Capacity after push_back: " << arr.capacity() << endl << endl;

    // Removes the element in last position
    arr.pop_back();
    cout << "Vector Elements after pop_back: ";
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl << "Vector Size after pop_back: " << arr.size() << endl;
    cout << "Vector Capacity after pop_back: " << arr.capacity() << endl << endl;

    // Shrinks unused memory to save space
    cout << "Capacity before shrink: " << arr.capacity() << endl;
    arr.shrink_to_fit();
    cout << "Capacity after shrink: " << arr.capacity() << endl << endl;

    // Inserting Elements from Another Vector
    vector<int> vec1 = {100, 200, 300};
    vector<int> vec2 = {400, 500, 600};
    vec1.insert(vec1.end(), vec2.begin(), vec2.end());
    cout << "Vector Elements after inserting elements from another vector: ";
    for (auto it : vec1) {
        cout << it << " ";
    }
    cout << endl;

    // Inserting Elements from an Array
    vector<int> vec3 = {700, 800, 900};
    int arrToInsert[] = {1000, 1100, 1200};
    vec3.insert(vec3.end(), std::begin(arrToInsert), std::end(arrToInsert));
    cout << "Vector Elements after inserting elements from an array: ";
    for (auto it : vec3) {
        cout << it << " ";
    }
    cout << endl;

    // Inserting Multiple Copies of a Single Element
    vector<int> vec4 = {1, 2, 3};
    vec4.insert(vec4.end(), 3, 4);  // Insert three copies of the number 4
    cout << "Vector Elements after inserting multiple copies of a single element: ";
    for (auto it : vec4) {
        cout << it << " ";
    }
    cout << endl;

    // Inserting Elements Using an Initializer List
    vector<int> vec5 = {10, 20, 30};
    vec5.insert(vec5.end(), {40, 50, 60});
    cout << "Vector Elements after inserting elements using an initializer list: ";
    for (auto it : vec5) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
