#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool areIdentical(Node *head1, Node *head2) {
    if(head1 == nullptr && head2 == nullptr) return true;
    if(head1 == nullptr || head2 == nullptr || head1->data != head2->data) return false;

    return areIdentical(head1->next, head2->next);
}

int main() {
    // First linked list: 1 -> 2 -> 3
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    // Second linked list: 1 -> 2 -> 3
    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);

    // Third linked list: 1 -> 2 -> 4
    Node* head3 = new Node(1);
    head3->next = new Node(2);
    head3->next->next = new Node(4);

    cout << "List1 and List2 identical? " 
         << (areIdentical(head1, head2) ? "Yes" : "No") << endl;

    cout << "List1 and List3 identical? " 
         << (areIdentical(head1, head3) ? "Yes" : "No") << endl;

    return 0;
}
