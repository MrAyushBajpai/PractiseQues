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

int getCount(Node* head) {
    int count = 0;
    while(head != nullptr){
        count++;
        head = head -> next;
    }
    return count;        
}

int main() {
    // Create linked list: 5 -> 10 -> 15
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(15);

    cout << "Number of nodes in the list: " << getCount(head) << endl;

    return 0;
}
