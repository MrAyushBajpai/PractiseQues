#include <iostream>
#include <vector>
using namespace std;

class myStack {
  public:
    vector<int> stack;
    int size = 0;
    myStack(int n){
        size = n;
    }

    bool isEmpty() {
        return stack.size() == 0;
    }

    bool isFull() {
        return stack.size() == size;
    }

    void push(int x) {
        stack.push_back(x);
    }

    void pop() {
        if(stack.size() > 0) stack.pop_back();
    }

    int peek() {
        if(stack.size() > 0) return stack.back();
        return -1;
    }
};

int main() {
    myStack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}