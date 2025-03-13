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

TreeNode* helper(vector<int>& preorder, int& ptr, int upperBound) {
    if (ptr >= preorder.size() || preorder[ptr] > upperBound) {
        return nullptr;
    }

    TreeNode* newNode = new TreeNode(preorder[ptr++]);
    newNode->left = helper(preorder, ptr, newNode->val);
    newNode->right = helper(preorder, ptr, upperBound);

    return newNode;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
    int ptr = 0;
    return helper(preorder, ptr, INT_MAX);
}

void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    vector<int> preorder = {8, 5, 1, 7, 10, 12};
    TreeNode* root = bstFromPreorder(preorder);

    cout << "Inorder Traversal of Constructed BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
