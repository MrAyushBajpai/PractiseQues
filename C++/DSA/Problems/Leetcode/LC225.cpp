#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n = q.size();
        for(int i = 0; i <= n - 2; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl; // 30
    st.pop();
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10

    cout << (st.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
