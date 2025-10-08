#include <iostream>
#include <vector>
using namespace std;

class myQueue {
public:
    vector<int> queue;
    int capacity = 0;
    myQueue(int n) {
        capacity = n;
    }
    
    bool isEmpty() {
        return queue.size() == 0;
    }
    
    bool isFull() {
        return queue.size() == capacity;
    }
    
    void enqueue(int x) {
        queue.push_back(x);
    }
    
    void dequeue() {
        if(!queue.empty())
            queue.erase(queue.begin());
    }
    
    int getFront() {
        if(!queue.empty())
            return queue.front();
        return -1;
    }
    
    int getRear() {
        if(!queue.empty())
            return queue.back();
        return -1;
    }
};

int main() {
    myQueue q(3);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    q.dequeue();
    q.enqueue(40);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
}