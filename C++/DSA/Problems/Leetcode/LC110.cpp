#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int height(TreeNode* root){
    if (root == nullptr) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(TreeNode* root) {
    if (root == nullptr) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight - rightHeight);

    bool heightDiff = (diff <= 1);

    bool leftBalanced = isBalanced(root->left);
    bool rightBalanced = isBalanced(root->right);

    if(heightDiff && leftBalanced && rightBalanced) return true;
    return false;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    if (isBalanced(root)) {
        cout << "The tree is balanced.\n";
    } else {
        cout << "The tree is not balanced.\n";
    }

    return 0;
}
