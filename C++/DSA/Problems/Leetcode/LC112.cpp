#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == nullptr) return false;
    if(targetSum - root->val == 0 && root -> left == nullptr && root -> right == nullptr) return true;

    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}

int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);

    int targetSum1 = 22;
    int targetSum2 = 26;
    int targetSum3 = 18;

    cout << "Path sum " << targetSum1 << " exists: " << hasPathSum(root, targetSum1) << endl;
    cout << "Path sum " << targetSum2 << " exists: " << hasPathSum(root, targetSum2) << endl;
    cout << "Path sum " << targetSum3 << " exists: " << hasPathSum(root, targetSum3) << endl;

    delete root->left->left->left;
    delete root->left->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right->left;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}