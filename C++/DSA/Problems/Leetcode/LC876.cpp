#include <iostream>
#include <bits/stdc++.h>
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
    ListNode* temp = head;
    while (temp != NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

ListNode* middleNode(ListNode* head) {
    int length = findLength(head);
    int mid = length/2;

    ListNode* temp = head;
    for(int i = 0; i < mid; i++){
        temp = temp->next;
    }

    return temp;
}

ListNode* middleNodeTortoiseAndHare(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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

    cout << middleNode(head)->val << endl;
}