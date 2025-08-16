#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node *insertAtBegining(Node *head, int x) {
    Node* node = new Node(x);
    if(head == nullptr) return node;

    node->next = head;
    head = node;
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
    Node* head = nullptr;

    // Insert elements at the beginning
    head = insertAtBegining(head, 10);
    head = insertAtBegining(head, 20);
    head = insertAtBegining(head, 30);

    // Expected list: 30 -> 20 -> 10
    cout << "Linked list: ";
    printList(head);

    return 0;
}
