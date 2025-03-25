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

int findMax(vector<int>& nums, int start, int end) {
    int maxIndex = start;
    for (int i = start; i <= end; i++) {
        if (nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

TreeNode* helper(vector<int>& nums, int start, int end) {
    if (start > end) return nullptr;

    int maxIndex = findMax(nums, start, end);
    TreeNode* newNode = new TreeNode(nums[maxIndex]);

    newNode->left = helper(nums, start, maxIndex - 1);
    newNode->right = helper(nums, maxIndex + 1, end);

    return newNode;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return helper(nums, 0, nums.size() - 1);
}

void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    vector<int> val = {3, 2, 1, 6, 0, 5};
    TreeNode* root = constructMaximumBinaryTree(val);
    cout << "In-order traversal of the constructed tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
