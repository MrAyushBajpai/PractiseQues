#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class myStack {
public:
    Node* head = nullptr;
    int s = 0;
    myStack() {
        // Initialize your data members
    }
    
    bool isEmpty() {
        return s == 0;
    }
    
    void push(int x) {
        Node* node = new Node(x);
        node -> next = head;
        head = node;
        s++;
    }
    
    void pop() {
        if(s > 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            s--;
        }
    }
    
    int peek() {
        if(s > 0){
            return head -> data;
        }
        return -1;
    }
    
    int size() {
        return s;
    }
};

int main() {
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << st.peek() << endl; // 30
    st.pop();
    cout << st.peek() << endl; // 20
    cout << st.size() << endl; // 2
}
