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

int findSecondMinimumValue(TreeNode* root) {
    if (!root || !root->left || !root->right) return -1;

    int leftVal = root->left->val;
    int rightVal = root->right->val;
    
    if (leftVal == root->val) leftVal = findSecondMinimumValue(root->left);
    if (rightVal == root->val) rightVal = findSecondMinimumValue(root->right);

    if (leftVal == -1) return rightVal;
    if (rightVal == -1) return leftVal;

    return min(leftVal, rightVal);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    cout << "Second Minimum Value: " << findSecondMinimumValue(root) << endl;

    return 0;
}