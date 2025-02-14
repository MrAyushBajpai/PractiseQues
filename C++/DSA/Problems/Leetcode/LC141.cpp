#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow) return true;
    }

    return false;
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
    fourth->next = head;

    cout << "Loop Present: " << (hasCycle(head) ? "True" : "False");

}