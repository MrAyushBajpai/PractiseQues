#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

int GetNth(Node *head, int index) {
    while(head != nullptr){
        if(index == 1) return head->data;
        head = head->next;
        index--;
    }
    return -1; // if index is out of range
}

int main() {
    // Create a simple linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Test cases
    cout << "Element at index 1: " << GetNth(head, 1) << endl; // Expected 10
    cout << "Element at index 2: " << GetNth(head, 2) << endl; // Expected 20
    cout << "Element at index 3: " << GetNth(head, 3) << endl; // Expected 30
    cout << "Element at index 4: " << GetNth(head, 4) << endl; // Expected -1 (out of range)

    return 0;
}
