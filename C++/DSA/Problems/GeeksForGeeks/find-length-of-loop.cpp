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

int lengthOfLoop(Node *head) {
    Node* slow = head, *fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(fast == slow){
            int count = 1;
            fast = fast -> next;
            while(slow != fast){
                count++;
                fast = fast -> next;
            }
            return count;
        }
    }    
    return 0;
}

int main() {
    // Create nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Create a loop (5 -> 3)
    head->next->next->next->next->next = head->next->next;

    int loopLength = lengthOfLoop(head);

    if(loopLength > 0)
        cout << "Loop detected of length: " << loopLength << endl;
    else
        cout << "No loop detected." << endl;

    return 0;
}