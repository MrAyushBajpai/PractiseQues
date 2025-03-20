#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* helper(vector<int>& nums, int start, int end){
    if(start > end) return nullptr;

    int mid = start + (end-start) / 2;

    return new TreeNode(nums[mid], helper(nums, start, mid - 1), helper(nums, mid + 1, end));
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return helper(nums, 0, nums.size() - 1);
}

void printInOrder(TreeNode* root) {
    if (root == nullptr) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(nums);
    
    cout << "In-order traversal of the constructed BST: ";
    printInOrder(root);
    cout << endl;

    return 0;
}
