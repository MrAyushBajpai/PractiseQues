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

bool solve(TreeNode* p, TreeNode* q){
    if(p == nullptr && q == nullptr) return true;
    if(p == nullptr || q == nullptr) return false;

    if(p->val != q->val) return false;
    return solve(p->left, q->right) && solve(p->right, q->left);
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr) return true;
    return solve(root->left, root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(4), new TreeNode(3));

    cout << (isSymmetric(root) ? "Tree is symmetric" : "Tree is not symmetric") << endl;

    return 0;
}