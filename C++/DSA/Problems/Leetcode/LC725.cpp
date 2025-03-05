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
    ListNode* temp = head;
    int len = 0;
    while(temp != nullptr){
        len++;
        temp = temp->next;
    }
    return len;
}

vector<ListNode*> splitListToParts(ListNode* head, int k) {
    vector<ListNode*> res;
    int len = findLength(head);
    int elements = len / k;
    int extras = len % k;

    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(extras != 0){
        if(prev != nullptr) prev->next = nullptr;
        res.push_back(temp);

        for(int i = 0; i < elements + 1; i++){
            prev = temp;
            temp = temp->next;
        }

        extras--;

    }

    while(temp != nullptr){
        if(prev != nullptr) prev->next = nullptr;
        res.push_back(temp);
        int i = elements;
        while(temp != nullptr && i){
            prev = temp;
            temp = temp->next;
            i--;
        }
    }

    while(k-- > len){
        res.push_back(nullptr);
    }

    return res;
}

int main() {
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    for (int i = 2; i <= 10; i++) {
        temp->next = new ListNode(i);
        temp = temp->next;
    }

    int k = 3;
    vector<ListNode*> result = splitListToParts(head, k);

    for (int i = 0; i < result.size(); i++) {
        ListNode* node = result[i];
        cout << "Part " << i + 1 << ": ";
        while (node) {
            cout << node->val << " ";
            node = node->next;
        }
        cout << endl;
    }

    return 0;
}
