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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA = findLength(headA);
    int lenB = findLength(headB);

    int diff = abs(lenA-lenB);
    if(lenA>lenB){
        for(int i = 0; i < diff; i++){
            headA = headA -> next;
        }
    }
    else{
        for(int i = 0; i < diff; i++){
            headB = headB -> next;
        }
    }
    
    while(headA != nullptr && headB != nullptr){
        if(headA == headB) return headA;
        headA = headA -> next;
        headB = headB -> next;
    }
    return nullptr;
}

int main(){
    ListNode* first = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);

    ListNode* fourth = new ListNode(4);
    ListNode* fifth = new ListNode(5);

    ListNode* sixth = new ListNode(6);
    ListNode* seventh = new ListNode(7);
    ListNode* eight = new ListNode(8);

    first->next = second;
    second->next = third;
    third->next = sixth;

    fourth->next = fifth;
    fifth->next = sixth;

    sixth->next = seventh;
    seventh->next = eight;

    cout << "Intersection at: " << getIntersectionNode(first, fourth);
}