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


void solve(TreeNode* root, int targetSum, int current_sum, vector<int> &path, vector<vector<int>>& ans) {      
    if (root == nullptr)
        return;

    path.push_back(root->val);
    current_sum += root->val;

    if (root->left == nullptr && root->right == nullptr) {
        if (current_sum == targetSum) {
            ans.push_back(path);
        }
        return;
    }
    else{
        solve(root->left, targetSum, current_sum, path, ans);
        solve(root->right, targetSum, current_sum, path, ans);
    }

    path.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    int sum = 0;
    vector<int> path;
    solve(root, targetSum, sum, path, ans);
    return ans;
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    int targetSum = 22;
    vector<vector<int>> result = pathSum(root, targetSum);

    for (const auto& path : result) {
        for (int num : path) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}