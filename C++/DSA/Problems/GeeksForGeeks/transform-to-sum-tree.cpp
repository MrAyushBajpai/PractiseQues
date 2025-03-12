#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left, * right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(Node* node) {
    if (node == nullptr) return;
    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
}

int toSumTreeHelper(Node* node) {
    if (node == nullptr) return 0;
    int left = toSumTreeHelper(node->left);
    int right = toSumTreeHelper(node->right);
    int oldVal = node->data;
    node->data = left + right;
    return oldVal + node->data;
}

void toSumTree(Node* node) {
    toSumTreeHelper(node);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(-2);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(-4);
    root->right->left = new Node(7);
    root->right->right = new Node(5);

    cout << "Original Tree (Inorder): ";
    inorderTraversal(root);
    cout << endl;

    toSumTree(root);

    cout << "Sum Tree (Inorder): ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
