#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 10;

    // This is an empty vector
    // vector<int> arr;
    // cout << "Is array empty?: " << arr.empty() << endl;

    // This is not an empty vector, and is initialized by default with 0 "n" times, or the second argument passed
    vector<int> arr(n, 2);
    cout << "Is array empty?: " << arr.empty() << endl;

    // Display the initial vector elements
    cout << "Initial Vector Elements: ";
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl << "Initial Vector Size: " << arr.size() << endl;
    cout << "Initial Vector Capacity: " << arr.capacity() << endl << endl;

    // Doubles the size of vector, and adds 1 at the end
    arr.push_back(1);
    cout << "Vector Elements after push_back: ";
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl << "Vector Size after push_back: " << arr.size() << endl;
    cout << "Vector Capacity after push_back: " << arr.capacity() << endl << endl;

    // Removes the element in last position
    arr.pop_back();
    cout << "Vector Elements after pop_back: ";
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl << "Vector Size after pop_back: " << arr.size() << endl;
    cout << "Vector Capacity after pop_back: " << arr.capacity() << endl << endl;

    // Shrinks unused memory to save space
    cout << "Capacity before shrink: " << arr.capacity() << endl;
    arr.shrink_to_fit();
    cout << "Capacity after shrink: " << arr.capacity() << endl;
}
