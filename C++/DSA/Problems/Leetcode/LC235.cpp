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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == nullptr) return root;

    if(root->val > p->val && root-> val > q->val){
        return lowestCommonAncestor(root->left, p, q);
    }

    if(root->val < p->val && root-> val < q->val){
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}

TreeNode* lowestCommonAncestorIterative(TreeNode* root, TreeNode* p, TreeNode* q) {
    while(root){
        if(root->val > p->val && root->val > q->val){
            root = root->left;
        }
        else if(root->val < p->val && root->val < q->val){
            root = root->right;
        }
        else{
            return root;
        }
    }
    return nullptr;
}

int main() {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode* p = root->left;
    TreeNode* q = root->left->right;

    TreeNode* lca = lowestCommonAncestor(root, p, q);
    cout << "LCA (Recursive) of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    TreeNode* lca_iter = lowestCommonAncestorIterative(root, p, q);
    cout << "LCA (Iterative) of " << p->val << " and " << q->val << " is: " << lca_iter->val << endl;

    return 0;
}
