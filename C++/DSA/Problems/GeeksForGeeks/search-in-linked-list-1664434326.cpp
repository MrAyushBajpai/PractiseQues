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

bool searchKey(int n, Node* head, int key) {
    if(head == nullptr) return false;
    if(head->data == key) return true;

    return searchKey(n-1, head->next, key);
}

int main(){
    // Create linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int n = 4;  // length of linked list

    int key1 = 30;
    int key2 = 50;

    cout << "Searching for " << key1 << ": "
         << (searchKey(n, head, key1) ? "Found" : "Not Found") << endl;

    cout << "Searching for " << key2 << ": "
         << (searchKey(n, head, key2) ? "Found" : "Not Found") << endl;

    return 0;
}
