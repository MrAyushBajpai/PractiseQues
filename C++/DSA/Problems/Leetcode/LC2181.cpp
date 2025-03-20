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

ListNode* mergeNodes(ListNode* head) {
    if(head == nullptr) return nullptr;

    ListNode* first = head;
    ListNode* second = head->next;

    while(second != nullptr){
        int sum = 0;
        while(second->val != 0){
            sum += second->val;
            second = second->next;
        }

        if(second->next != nullptr){
            first->val = sum;
            first->next = second;
            first = second;
            second = second -> next;
        }
        else{
            first->val = sum;
            first->next = nullptr;
            break;
        }      
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(0);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next = new ListNode(0);

    cout << "Original List: ";
    printList(head);

    ListNode* result = mergeNodes(head);

    cout << "Merged List: ";
    printList(result);

    return 0;
}
