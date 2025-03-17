#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> rightSideViewBFS(TreeNode* root) {
    vector<int> result;
    if(root == nullptr) return result;

    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()){
        int levelsize = q.size();
        int lastNodeValue;

        for(int i = 0; i < levelsize; i++){
            TreeNode* temp = q.front();
            q.pop();
            lastNodeValue = temp -> val;

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        result.push_back(lastNodeValue);
    }
    return result;
}

void dfs(TreeNode* node, int depth, vector<int>& result){
    if(!node) return;

    if(depth == result.size()){
        result.push_back(node->val);
    }

    dfs(node->right, depth + 1, result);
    dfs(node->left, depth + 1, result);
}

vector<int> rightSideViewDFS(TreeNode* root) {
    vector<int> result;
    dfs(root, 0, result);
    return result;
}


int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    vector<int> bfs_result = rightSideViewBFS(root);
    vector<int> dfs_result = rightSideViewDFS(root);

    cout << "Right Side View (BFS): ";
    for(int val : bfs_result) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Right Side View (DFS): ";
    for(int val : dfs_result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
