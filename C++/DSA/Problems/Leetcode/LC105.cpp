#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

unordered_map<int, int> position;
void makePosMap(vector<int>& inorder){
    for(int i = 0; i < inorder.size(); i++){
        position[inorder[i]] = i;
    }
}

int findPosition(vector<int>& inorder, int element){
        return position[element];
}

TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& preOrderIndex, int inOrderStart, int inOrderEnd){
    if (preOrderIndex >= inorder.size() || inOrderStart > inOrderEnd) return nullptr;

    int element = preorder[preOrderIndex++];
    TreeNode* root = new TreeNode(element);
    int pos = findPosition(inorder, element);

    root->left = solve(preorder, inorder, preOrderIndex, inOrderStart, pos-1);
    root->right = solve(preorder, inorder, preOrderIndex, pos+1, inOrderEnd);

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preOrderIndex = 0;
    makePosMap(inorder);
    TreeNode* ans = solve(preorder, inorder, preOrderIndex, 0, inorder.size() -1);
    return ans;
}

void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main(){
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    TreeNode* root = buildTree(preorder, inorder);

    cout << "Inorder Traversal of Reconstructed Tree: ";
    printInorder(root);
    cout << endl;
    
    return 0;
}