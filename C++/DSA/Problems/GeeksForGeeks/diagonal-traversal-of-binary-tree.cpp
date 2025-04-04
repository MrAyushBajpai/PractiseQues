#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}  // Constructor
};

vector<int> diagonal(Node *root) {
    vector<int> ans;
    if (!root) return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        
        while (temp) {
            ans.push_back(temp->data);
            if (temp->left) q.push(temp->left);
            temp = temp->right;
        }
    }
    
    return ans;
}

Node* createTree() {
    
    Node* root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);

    return root;
}

int main() {
    Node* root = createTree();
    
    vector<int> result = diagonal(root);
    
    cout << "Diagonal Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
