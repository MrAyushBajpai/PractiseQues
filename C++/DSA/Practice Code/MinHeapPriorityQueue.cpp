#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    // Create a min heap using priority_queue with a custom comparator
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Inserting elements into the priority queue
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(30);
    minHeap.push(15);

    // Display the minimum element
    cout << "Minimum element: " << minHeap.top() << endl;

    // Display the elements in the min heap order
    cout << "Elements in min heap (not sorted):" << endl;
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // Access the top element
        minHeap.pop(); // Remove the top element
    }
    cout << endl;

    // Adding more elements
    minHeap.push(25);
    minHeap.push(2);
    
    // Display the minimum element after adding new elements
    cout << "New minimum element after adding more elements: " << minHeap.top() << endl;

    return 0;
}
