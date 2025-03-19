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

void inorder(TreeNode* root, vector<int>& in){
    if(root == nullptr) return;

    inorder(root->left, in);
    in.push_back(root->val);
    inorder(root->right, in);
}

TreeNode* solve(int l, int r, vector<int>& in){
    if(l > r) return nullptr;
    int mid = l + (r - l) / 2;

    TreeNode* root = new TreeNode(in[mid]);
    root->left = solve(l, mid - 1, in);
    root->right = solve(mid + 1, r, in);

    return root;
}


TreeNode* balanceBST(TreeNode* root) {
    vector<int> in;
    inorder(root, in);
    return solve(0, in.size() - 1, in);
}

void printInorder(TreeNode* root) {
    if (root == nullptr) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    cout << "Original Inorder Traversal: ";
    printInorder(root);
    cout << endl;

    TreeNode* balancedRoot = balanceBST(root);

    cout << "Balanced Inorder Traversal: ";
    printInorder(balancedRoot);
    cout << endl;

    return 0;
}
