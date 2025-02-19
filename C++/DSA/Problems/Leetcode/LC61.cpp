#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight(ListNode* head, int k) {
    if(head == nullptr || head->next == nullptr) return head;

    ListNode* tail = nullptr;
    while(k--){
        tail = head;
        while(tail->next && tail->next->next != nullptr){
            tail = tail->next;
        }
        tail->next->next = head;
        head = tail->next;
        tail->next = nullptr;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    int k = 2;
    head = rotateRight(head, k);

    cout << "Rotated list by " << k << ": ";
    printList(head);

    return 0;
}