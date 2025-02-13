#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructors
    Node() : data(-1), next(NULL) {}
    Node(int data) : data(data), next(NULL) {}

    // Insertion Methods
    void insertAtBeginning(Node* &head, int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(Node* &head, int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(Node* &head, int data, int pos) {
        if (pos < 0) return;

        if (pos == 0) {
            insertAtBeginning(head, data);
            return;
        }

        Node* temp = head;
        if (!head) {
            head = new Node();
            temp = head;
        }

        for (int i = 0; i < pos - 1; i++) {
            if (temp->next != NULL) {
                temp = temp->next;
            } else {
                temp->next = new Node();
                temp = temp->next;
            }
        }

        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteBeginning(Node* &head) {
        if (head == NULL) return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtPosition(Node* &head, int position) {
        if (head == NULL || position < 0) return;

        if (position == 0) {
            deleteBeginning(head);
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) return;

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void deleteEnd(Node* &head) {
        if (head == NULL) return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->next) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    int findLength(Node* head) {
        int length = 0;
        while (head != NULL) {
            length++;
            head = head->next;
        }
        return length;
    }

    void print(Node* head) {
        while (head != NULL) {
            cout << head->data;
            if (head->next) cout << " -> ";
            head = head->next;
        }
        cout << endl;
    }
};

// Main Function
int main() {
    Node* head = new Node(25);
    Node obj;

    obj.insertAtBeginning(head, 20);
    obj.insertAtBeginning(head, 15);
    obj.insertAtBeginning(head, 10);
    obj.insertAtBeginning(head, 5);

    obj.insertAtEnd(head, 30);
    obj.insertAtEnd(head, 35);

    obj.insertAtPosition(head, 23, 3);
    obj.insertAtPosition(head, 31, 5);
    obj.insertAtPosition(head, 98, 9);

    obj.deleteBeginning(head);
    obj.deleteBeginning(head);

    obj.deleteAtPosition(head, 5);

    obj.deleteEnd(head);
    obj.deleteEnd(head);

    cout << "Length of Linked List: " << obj.findLength(head) << endl;
    obj.print(head);

    return 0;
}
