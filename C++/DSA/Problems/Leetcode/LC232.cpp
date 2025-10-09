#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> in;
    stack<int> out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }

        int val = out.top();
        out.pop();
        return val;
    }
    
    int peek() {
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }

        return out.top();
    }
    
    bool empty() {
        return out.empty() && in.empty();
    }
};

int main() {
    MyQueue q;

    cout << "Pushing 1, 2, 3 into queue...\n";
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element (peek): " << q.peek() << endl;

    cout << "Popping elements:\n";
    while (!q.empty()) {
        cout << q.pop() << " ";
    }
    cout << endl;

    cout << "Queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}