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

int max_diameter = INT_MIN;
int solve(TreeNode* root){
    if (root == nullptr) return 0;

    int left_height = solve(root->left);
    int right_height = solve(root->right);

    if(left_height + right_height > max_diameter){
        max_diameter = left_height + right_height;
    }

    return max(left_height, right_height) + 1;
}

int diameterOfBinaryTree(TreeNode* root) {
    solve(root);
    return max_diameter;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of Binary Tree: " << diameterOfBinaryTree(root) << endl;

    return 0;
}