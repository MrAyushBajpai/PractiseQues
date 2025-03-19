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

TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
    if (!original) return nullptr;
    if (original == target) return cloned;
    return getTargetCopy(original->left, cloned->left, target) 
        ?: getTargetCopy(original->right, cloned->right, target);
}

int main() {
    TreeNode* original = new TreeNode(7);
    original->left = new TreeNode(4);
    original->right = new TreeNode(3);
    original->right->left = new TreeNode(6);
    original->right->right = new TreeNode(19);

    TreeNode* cloned = new TreeNode(7);
    cloned->left = new TreeNode(4);
    cloned->right = new TreeNode(3);
    cloned->right->left = new TreeNode(6);
    cloned->right->right = new TreeNode(19);

    TreeNode* target = original->right;

    TreeNode* result = getTargetCopy(original, cloned, target);

    if (result) {
        cout << "Corresponding node found in cloned tree with value: " << result->val << endl;
    } else {
        cout << "Node not found in cloned tree." << endl;
    }

    delete original->left;
    delete original->right->left;
    delete original->right->right;
    delete original->right;
    delete original;
    
    delete cloned->left;
    delete cloned->right->left;
    delete cloned->right->right;
    delete cloned->right;
    delete cloned;

    return 0;
}