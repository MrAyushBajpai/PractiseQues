#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
public:
    Node* head = nullptr;
    Node* last = head;
    int s = 0;
    myQueue() {
        // Initialize your data members
    }
    
    bool isEmpty() {
        return s == 0;
    }
    
    void enqueue(int x) {
        Node* node = new Node(x);
        if(s == 0){
            head = node;
            last = node;
        }
        else{
            last -> next = node;
            last = node;
        }
        s++;
    }
    
    void dequeue() {
        if(s > 0){
            Node* temp = head;
            head = head -> next;
            delete temp;
            s--;
        }
        if(s == 0) last = nullptr;
    }
    
    int getFront() {
        if(s > 0)
            return head -> data;
        else
            return -1;
    }
    
    int size() {
        return s;
    }
};

int main() {
    myQueue q;

    // Enqueue some elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl; // Should print 10
    cout << "Queue size: " << q.size() << endl;        // Should print 3

    // Dequeue an element
    q.dequeue();
    cout << "Front after dequeue: " << q.getFront() << endl; // Should print 20
    cout << "Queue size: " << q.size() << endl;              // Should print 2

    // Dequeue all elements
    q.dequeue();
    q.dequeue();

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print Yes
    cout << "Front element: " << q.getFront() << endl;                  // Should print -1

    // Enqueue after empty
    q.enqueue(50);
    cout << "Front element after enqueue: " << q.getFront() << endl;   // Should print 50
    cout << "Queue size: " << q.size() << endl;                         // Should print 1

    return 0;
}