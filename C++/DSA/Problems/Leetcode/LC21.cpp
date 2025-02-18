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

ListNode* createLinkedList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode dummy(0);
    ListNode* tail = &dummy;
    for (int num : nums) {
        tail->next = new ListNode(num);
        tail = tail->next;
    }
    return dummy.next;
}

void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

void freeLinkedList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    while (head) {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;

    ListNode dummy(0);
    ListNode* tail = &dummy;

    while(temp1 != nullptr && temp2 != nullptr){
        if(temp1->val < temp2->val){
            ListNode* tempNode = new ListNode(temp1 -> val);
            tail->next = tempNode;
            tail = tempNode;
            temp1 = temp1 -> next;
        }
        else{
            ListNode* tempNode = new ListNode(temp2 -> val);
            tail->next = tempNode;
            tail = tempNode;
            temp2 = temp2 -> next;
        }
    }

    while(temp1 != nullptr){
        ListNode* tempNode = new ListNode(temp1 -> val);
        tail->next = tempNode;
        tail = tempNode;
        temp1 = temp1 -> next;
    }

    while(temp2 != nullptr){
        ListNode* tempNode = new ListNode(temp2 -> val);
        tail->next = tempNode;
        tail = tempNode;
        temp2 = temp2 -> next;
    }

    return dummy.next;
}

int main() {
    vector<int> num1 = {1, 4, 8};
    vector<int> num2 = {2, 5, 6};

    ListNode* l1 = createLinkedList(num1);
    ListNode* l2 = createLinkedList(num2);

    cout << "Input List 1: ";
    printLinkedList(l1);
    cout << "Input List 2: ";
    printLinkedList(l2);

    ListNode* result = mergeTwoLists(l1, l2);

    cout << "Result: ";
    printLinkedList(result);

    // Free allocated memory
    freeLinkedList(l1);
    freeLinkedList(l2);
    freeLinkedList(result);

    return 0;
}