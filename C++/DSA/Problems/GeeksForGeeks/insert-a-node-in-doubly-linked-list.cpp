#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};

Node *addNode(Node *head, int p, int x) {
    Node* node = new Node(x);
    if(head == nullptr) return node;
    
    Node* temp = head;
    while(p > 0 && temp->next != nullptr){
        temp = temp->next;
        p--;
    }

    node->next = temp->next;

    if(node->next != nullptr) node->next->prev = node;
    
    temp->next = node;
    node->prev = temp;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Initial list: 10 -> 20 -> 30
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    cout << "Original list: ";
    printList(head);

    // Insert 25 after position 1 (0-based indexing: after 20)
    head = addNode(head, 1, 25);

    cout << "List after inserting 25 after position 1: ";
    printList(head);

    // Insert 5 after position 0 (after 10)
    head = addNode(head, 0, 5);

    cout << "List after inserting 5 after position 0: ";
    printList(head);

    return 0;
}
