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

pair<TreeNode*, int> dfs(TreeNode* root){
    if(root == nullptr) return {nullptr, 0};

    auto left = dfs(root -> left);
    auto right = dfs(root-> right);

    if(left.second == right.second){
        return {root, left.second + 1};
    }
    else if(left.second > right.second){
        return {left.first, left.second + 1};
    }
    else{
        return {right.first, right.second + 1};
    }
}


TreeNode* lcaDeepestLeaves(TreeNode* root) {
    auto val = dfs(root);
    return val.first;
}

int main() {
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node2 = new TreeNode(2, node4, nullptr);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* root = new TreeNode(1, node2, node3);

    TreeNode* lca = lcaDeepestLeaves(root);
    
    if (lca) {
        cout << "LCA of deepest leaves: " << lca->val << endl;
    } else {
        cout << "LCA not found." << endl;
    }

    delete node4;
    delete node2;
    delete node3;
    delete root;

    return 0;
}
