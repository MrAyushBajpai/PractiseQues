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

int sum = 0;
TreeNode* bstToGst(TreeNode* root) {
    if(root == nullptr) return nullptr;

    bstToGst(root->right);

    sum += root ->val;
    root -> val = sum;

    bstToGst(root->left);

    return root;
}

void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    // Example BST:
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2, nullptr, new TreeNode(3));
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7, nullptr, new TreeNode(8));

    cout << "Original Inorder: ";
    inorder(root);
    cout << endl;

    bstToGst(root);

    cout << "Greater Sum Tree Inorder: ";
    inorder(root);
    cout << endl;

    return 0;
}