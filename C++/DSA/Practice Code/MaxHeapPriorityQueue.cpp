#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Create a max heap using priority_queue
    priority_queue<int> maxHeap;

    // Inserting elements into the priority queue
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);
    maxHeap.push(15);

    // Display the maximum element
    cout << "Maximum element: " << maxHeap.top() << endl;

    // Display the elements in the max heap order
    cout << "Elements in max heap (not sorted):" << endl;
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Access the top element
        maxHeap.pop(); // Remove the top element
    }
    cout << endl;

    // Adding more elements
    maxHeap.push(25);
    maxHeap.push(40);
    
    // Display the maximum element after adding new elements
    cout << "New maximum element after adding more elements: " << maxHeap.top() << endl;

    return 0;
}
