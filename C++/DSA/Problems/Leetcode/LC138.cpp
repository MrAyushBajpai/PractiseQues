#include <iostream>
#include <unordered_map>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {
    unordered_map<Node*, Node*> addMap;
    Node* temp = head;
    Node dummy(0);
    Node* tail = &dummy;

    while (temp != nullptr) {
        Node* newNode = new Node(temp->val);
        tail->next = newNode;
        tail = newNode;
        addMap[temp] = tail;
        temp = temp->next;
    }

    Node* temp1 = head;
    Node* temp2 = dummy.next;
    while (temp1 != nullptr) {
        temp2->random = addMap[temp1->random];
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return dummy.next;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << "Value: " << temp->val << ", Random: ";
        if (temp->random)
            cout << temp->random->val;
        else
            cout << "NULL";
        cout << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next;

    cout << "Original List:\n";
    printList(head);
    
    Node* copiedList = copyRandomList(head);
    
    cout << "\nCopied List:\n";
    printList(copiedList);
    
    return 0;
}