#include <iostream>
#include <queue>
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

vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res;

    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr);

    vector<int> tempRes;
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        if(temp == nullptr){
            if(!q.empty()){
                q.push(nullptr);
            }
            res.push_back(tempRes); 
            tempRes.clear();
        }
        else{
            tempRes.push_back(temp->val);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

    return res;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<vector<int>> result = levelOrder(root);

    cout << "Level Order Traversal: ";
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}