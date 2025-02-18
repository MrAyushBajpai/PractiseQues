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

int findLength(ListNode* head){
    int count = 0;
    ListNode* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int move = findLength(head) - n;

    if (move == 0){
        ListNode* temp = head->next;
        delete head;
        return temp;
    }

    ListNode* temp = head;
    for(int i = 1; i<move; i++){
        temp = temp->next;
    }

    if (temp->next){
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
    return head;
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

    ListNode* revHead = removeNthFromEnd(head, 3);
    while(revHead != NULL){
        cout << revHead->val << " -> ";
        revHead = revHead->next; 
    }

}