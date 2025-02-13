#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data = -1) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertAtEnd(int data) {
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
        newNode->prev = temp;
    }

    void insertAtPosition(int data, int pos) {
        if (pos < 0) return;

        if (pos == 0) {
            insertAtBeginning(data);
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != NULL && i < pos - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        Node* newNode = new Node(data);
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }

    void deleteBeginning() {
        if (head == NULL) return;

        Node* temp = head;
        head = head->next;
        
        if (head != NULL) {
            head->prev = NULL;
        }

        delete temp;
    }

    void deleteEnd() {
        if (head == NULL) return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        delete temp;
    }

    void deleteAtPosition(int pos) {
        if (head == NULL || pos < 0) return;

        if (pos == 0) {
            deleteBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != NULL && i < pos; i++) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }

        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }

        delete temp;
    }

    int findLength() {
        int length = 0;
        Node* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next) cout << " <-> ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printReverse() {
        if (head == NULL) return;

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        while (temp != NULL) {
            cout << temp->data;
            if (temp->prev) cout << " <-> ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(5);
    dll.insertAtEnd(15);
    dll.insertAtEnd(20);
    dll.insertAtPosition(12, 2);
    dll.insertAtPosition(25, 10);

    cout << "Doubly Linked List: ";
    dll.print();

    cout << "Reversed List: ";
    dll.printReverse();

    cout << "Length: " << dll.findLength() << endl;

    dll.deleteBeginning();
    dll.deleteEnd();
    dll.deleteAtPosition(1);

    cout << "After Deletions: ";
    dll.print();

    return 0;
}
