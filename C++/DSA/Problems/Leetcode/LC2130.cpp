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

ListNode* revList(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = head->next;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int pairSum(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* second = revList(slow);
    ListNode* first = head;

    int maxSum = INT_MIN;
    
    while (second != nullptr && first != nullptr) {
        int sum = first->val + second->val;
        if(sum > maxSum) maxSum = sum;

        first = first -> next;
        second = second->next;
    }
    return maxSum;
}

int main(){

}