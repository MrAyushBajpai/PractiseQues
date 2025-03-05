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

void insertNode(ListNode* curr, int data) {
    ListNode* newNode = new ListNode(data, curr->next);
    curr->next = newNode;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    ListNode* curr = head;

    while (curr->next != nullptr) {
        int hcf = gcd(curr->val, curr->next->val);
        insertNode(curr, hcf);
        curr = curr->next->next;

    }

    return head;
}

int main(){
    // Creating linked list: 18 -> 6 -> 10 -> 3
    ListNode* head = new ListNode(18);
    head->next = new ListNode(6);
    head->next->next = new ListNode(10);
    head->next->next->next = new ListNode(3);
    
    // Calling the function to insert GCD nodes
    head = insertGreatestCommonDivisors(head);
    
    // Printing the modified linked list
    ListNode* temp = head;
    while(temp){
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    
    // Free allocated memory
    while(head){
        ListNode* del = head;
        head = head->next;
        delete del;
    }
    
    return 0;
}