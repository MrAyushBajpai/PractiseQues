#include <iostream>
#include <unordered_set>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool helper(TreeNode* root, unordered_set<int>& s, int k){
    if(root == nullptr) return false;

    if(s.find(k - root->val) != s.end()) return true;

    s.insert(root->val);
    return helper(root->left, s, k) || helper(root->right, s, k);
}

bool findTarget(TreeNode* root, int k) {
    unordered_set<int> s;
    return helper(root, s, k);
}

int main(){
    TreeNode* root = new TreeNode(2);
    root -> left = new TreeNode(1);
    root -> right = new TreeNode(3);

    cout << findTarget(root, 4);
}
