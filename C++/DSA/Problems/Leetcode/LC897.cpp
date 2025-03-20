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

void inorder(TreeNode* root, vector<TreeNode*>& in) {
    if (root == nullptr)
        return;

    inorder(root->left, in);
    in.push_back(root);
    inorder(root->right, in);
}

TreeNode* createTree(vector<TreeNode*>& val, int& index) {
    if (index >= val.size())
        return nullptr;

    TreeNode* newNode = new TreeNode(val[index]->val);
    index++;
    newNode->right = createTree(val, index);

    return newNode;
}

TreeNode* increasingBST(TreeNode* root) {
    vector<TreeNode*> in;
    inorder(root, in);

    int index = 0;
    return createTree(in, index);
}

void printTree(TreeNode* root) {
    while (root) {
        cout << root->val << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);

    cout << "Inorder Increasing BST: ";
    TreeNode* result = increasingBST(root);
    printTree(result);

    return 0;
}
