#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while(curr != NULL){
        next = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool isPalindrome(ListNode* head) {
    ListNode* mid = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        mid = mid->next;
        fast = fast->next->next;
    }
    cout << "Mid: " << mid->val << endl;
    ListNode* compare = reverseList(mid);
    while(compare != NULL && head != NULL){
        if(compare->val != head->val){
            return false;
        }
        compare = compare->next;
        head = head->next;
    }
    return true;
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* first = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(1);
    ListNode* fourth = new ListNode(1);

    head->next = first;
    first->next = second;
    second->next = third;


    cout << isPalindrome(head);

}