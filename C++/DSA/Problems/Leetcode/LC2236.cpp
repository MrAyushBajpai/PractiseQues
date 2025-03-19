#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool checkTree(TreeNode* root) {
    return root->left->val + root->right->val == root->val;
}

int main() {
    TreeNode* leftChild = new TreeNode(4);
    TreeNode* rightChild = new TreeNode(6);
    TreeNode* root = new TreeNode(10, leftChild, rightChild);

    cout << (checkTree(root) ? "True" : "False") << endl;

    delete leftChild;
    delete rightChild;
    delete root;

    return 0;
}