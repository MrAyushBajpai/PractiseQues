#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int findLength(ListNode* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head -> next;
    }
    return len;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == NULL){
        return nullptr;
    }

    if(k > findLength(head)){
        return head;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = nullptr;

    for(int i = k; i > 0 && curr != nullptr; i--){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if(next != nullptr){
        head->next = reverseKGroup(next, k);
    }
    return prev;
}



int main(){
    ListNode* head = new ListNode(1);
    ListNode* first = new ListNode(2);
    ListNode* second = new ListNode(3);
    ListNode* third = new ListNode(4);
    ListNode* fourth = new ListNode(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    ListNode* revHead = reverseKGroup(head, 2);
    while(revHead != NULL){
        cout << revHead->val << " -> ";
        revHead = revHead->next; 
    }

}