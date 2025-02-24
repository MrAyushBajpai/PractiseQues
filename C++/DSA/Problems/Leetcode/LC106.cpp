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

void makePosMap(vector<int>& inorder, unordered_map<int, int>& position) {
    for (int i = 0; i < inorder.size(); i++) {
        position[inorder[i]] = i;
    }
}

TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& postorderIndex, 
                int inorderStart, int inorderEnd, unordered_map<int, int>& position) {
    if (inorderStart > inorderEnd || postorderIndex < 0) return nullptr;

    int element = postorder[postorderIndex--];
    TreeNode* root = new TreeNode(element);
    int pos = position[element];

    // Right subtree first, then left subtree
    root->right = solve(inorder, postorder, postorderIndex, pos + 1, inorderEnd, position);
    root->left = solve(inorder, postorder, postorderIndex, inorderStart, pos - 1, position);

    return root;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    unordered_map<int, int> position;
    makePosMap(inorder, position);
    int postorderIndex = postorder.size() - 1;
    return solve(inorder, postorder, postorderIndex, 0, inorder.size() - 1, position);
}

void inorderPrint(TreeNode* root) {
    if (!root) return;
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    TreeNode* root = buildTree(inorder, postorder);

    cout << "Inorder traversal of constructed tree: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}
