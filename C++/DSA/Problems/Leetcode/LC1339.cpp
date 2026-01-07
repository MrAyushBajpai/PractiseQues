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

long long maxProd = LLONG_MIN;
static constexpr int MOD = 1e9 + 7;

int findSum(TreeNode* root){
    if(root == nullptr) return 0;
    return root->val + findSum(root->left) + findSum(root->right);
}

long long dfs(TreeNode* root, int totalSum){
    if(root == nullptr) return 0;

    long long leftSum = dfs(root->left, totalSum);
    long long rightSum = dfs(root->right, totalSum);

    long long subTreeSum = root->val + leftSum + rightSum;
    long long prod = (totalSum - subTreeSum) * subTreeSum;

    maxProd = max(maxProd, prod);
    return subTreeSum;
}

int maxProduct(TreeNode* root) {
    int totalSum = findSum(root);
    dfs(root, totalSum);

    return maxProd % MOD;
}

int main() {
    /*
        Construct the following binary tree:

                1
               / \
              2   3
             / \   \
            4   5   6

        Total sum = 21
        Maximum product is obtained by splitting at subtree [2,4,5]:
        (21 - 11) * 11 = 110
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "Maximum Product: " << maxProduct(root) << endl;

    return 0;
}
