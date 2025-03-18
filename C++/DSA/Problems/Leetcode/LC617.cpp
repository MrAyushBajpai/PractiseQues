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

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if(root1 == nullptr && root2 == nullptr) return nullptr;
    if(root1 == nullptr) return root2;
    if(root2 == nullptr) return root1;

    root1->val += root2->val;

    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);

    return root1;
}

void printTree(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    TreeNode* root1 = new TreeNode(1, new TreeNode(3, new TreeNode(5), nullptr), new TreeNode(2));
    TreeNode* root2 = new TreeNode(2, new TreeNode(1, nullptr, new TreeNode(4)), new TreeNode(3, nullptr, new TreeNode(7)));

    cout << "Merged Tree 1: ";
    TreeNode* merged1 = mergeTrees(root1, root2);
    printTree(merged1);
    cout << endl;

    TreeNode* root3 = nullptr;
    TreeNode* root4 = new TreeNode(1, new TreeNode(2), new TreeNode(3));

    cout << "Merged Tree 2: ";
    TreeNode* merged2 = mergeTrees(root3, root4);
    printTree(merged2);
    cout << endl;

    TreeNode* root5 = nullptr;
    TreeNode* root6 = nullptr;

    cout << "Merged Tree 3: ";
    TreeNode* merged3 = mergeTrees(root5, root6);
    if (!merged3) cout << "nullptr";
    cout << endl;

    return 0;
}