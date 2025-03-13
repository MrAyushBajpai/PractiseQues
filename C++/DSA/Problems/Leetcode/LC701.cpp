#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (root->val > val) {
        root->left = insertIntoBST(root->left, val);
    } else {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 3);
    root = insertIntoBST(root, 7);
    root = insertIntoBST(root, 2);
    root = insertIntoBST(root, 4);
    root = insertIntoBST(root, 6);
    root = insertIntoBST(root, 8);

    inorderTraversal(root);
    cout << endl;

    return 0;
}
