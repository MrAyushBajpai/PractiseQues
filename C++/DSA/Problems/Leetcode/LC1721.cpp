#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* swapNodes(ListNode* head, int k) {
    int len = 0;
    int n = 1;
    ListNode* temp = head;
    ListNode* ptrFirst = temp;

    while (temp != nullptr) {
        if (n == k) {
            ptrFirst = temp;
        }
        n++;
        len++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < len - k; i++) {
        temp = temp->next;
    }

    int t = ptrFirst->val;
    ptrFirst->val = temp->val;
    temp->val = t;

    return head;
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);

    int k = 2;
    ListNode* newHead = swapNodes(head, k);

    // Print the modified list
    ListNode* temp = newHead;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free allocated memory (good practice)
    temp = newHead;
    while (temp) {
        ListNode* next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}