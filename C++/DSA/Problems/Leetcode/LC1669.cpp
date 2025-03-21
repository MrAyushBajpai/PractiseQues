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

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* ptrA = list1;
    for (int i = 1; i < a; i++) {
        ptrA = ptrA->next;
    }

    ListNode* ptrB = ptrA;
    for (int i = a; i <= b + 1; i++) {
        ptrB = ptrB->next;
    }

    ptrA->next = list2;
    ptrA = list2;
    while (ptrA->next != nullptr) {
        ptrA = ptrA->next;
    }

    ptrA->next = ptrB;

    return list1;
}

ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    vector<int> list1Values = {0, 1, 2, 3, 4, 5};
    vector<int> list2Values = {1000000, 1000001, 1000002};

    ListNode* list1 = createList(list1Values);
    ListNode* list2 = createList(list2Values);

    int a = 3, b = 4;

    cout << "Original List1: ";
    printList(list1);
    cout << "List2: ";
    printList(list2);

    ListNode* mergedList = mergeInBetween(list1, a, b, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
