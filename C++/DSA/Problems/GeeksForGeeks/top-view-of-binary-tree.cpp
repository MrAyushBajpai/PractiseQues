#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<int> topView(Node *root) {
    vector<int> result;
    if (root == nullptr) return result;

    map<int, int> m;
    queue<pair<Node*, int>> q;

    q.push({root, 0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int hd = it.second;

        if(m.find(hd) == m.end()){
            m[hd] = node->data;
        }

        if(node->left){
            q.push({node -> left, hd - 1});
        }

        if(node->right){
            q.push({node -> right, hd + 1});
        }
    }

    for(auto it: m){
        result.push_back(it.second);
    }

    return result;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(5);

    vector<int> result = topView(root);

    cout << "Top View: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}