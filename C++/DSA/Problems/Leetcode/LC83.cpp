#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL) return NULL;
    ListNode* first = head;
    ListNode* second = head->next;

    while(second != NULL){
        if (first->val == second->val){
            first->next = second->next;
            delete second;
            second = first;
        }
        else{
            first = second;
        }
        second = second->next;
    }

    return head;

}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* first = new ListNode(2);
    ListNode* second = new ListNode(3);
    ListNode* third = new ListNode(3);
    ListNode* fourth = new ListNode(3);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    ListNode* revHead = deleteDuplicates(head);
    while(revHead != NULL){
        cout << revHead->val << " -> ";
        revHead = revHead->next; 
    }

}