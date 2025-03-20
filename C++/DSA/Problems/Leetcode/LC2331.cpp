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

bool evaluateTree(TreeNode* root) {
    if(root->val == 0 || root->val == 1) return root->val;

    if(root->val == 2){
        return evaluateTree(root->left) || evaluateTree(root->right);
    }
    else{
        return evaluateTree(root->left) && evaluateTree(root->right);
    }
    return 0;
}

int main() {
    TreeNode* node1 = new TreeNode(0);
    TreeNode* node2 = new TreeNode(1);
    TreeNode* root1 = new TreeNode(3, node2, node1);
    cout << "Test Case 1: " << (evaluateTree(root1) ? "True" : "False") << endl;

    TreeNode* root2 = new TreeNode(2, node2, node1);
    cout << "Test Case 2: " << (evaluateTree(root2) ? "True" : "False") << endl;

    TreeNode* root3 = new TreeNode(1);
    cout << "Test Case 3: " << (evaluateTree(root3) ? "True" : "False") << endl;

    TreeNode* root4 = new TreeNode(0);
    cout << "Test Case 4: " << (evaluateTree(root4) ? "True" : "False") << endl;

    delete node1;
    delete node2;
    delete root1;
    delete root2;
    delete root3;
    delete root4;

    return 0;
}
