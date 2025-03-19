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

void inorder(TreeNode* node, vector<int>& in){
    if(node == nullptr) return;

    inorder(node->left, in);
    in.push_back(node->val);
    inorder(node->right, in);
}


int kthSmallest(TreeNode* root, int k) {
    vector<int> in;
    inorder(root, in);
    return in[k-1];
}

int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);
    
    cout << "Test Case 1: " << kthSmallest(root, 1) << " (Expected: 1)" << endl;
    cout << "Test Case 2: " << kthSmallest(root, 2) << " (Expected: 2)" << endl;
    cout << "Test Case 3: " << kthSmallest(root, 3) << " (Expected: 3)" << endl;
    cout << "Test Case 4: " << kthSmallest(root, 4) << " (Expected: 4)" << endl;

    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}