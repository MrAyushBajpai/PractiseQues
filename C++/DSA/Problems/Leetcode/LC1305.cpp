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

void pushLeft(stack<TreeNode*>& res, TreeNode* root){
    while (root != nullptr){
        res.push(root);
        root = root -> left;
    }
}


vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int> ans;

    stack<TreeNode*> stack1;
    stack<TreeNode*> stack2;
    pushLeft(stack1, root1);
    pushLeft(stack2, root2);

    while(!stack1.empty() || !stack2.empty()){
        if (stack2.empty() || (!stack1.empty() && stack1.top()->val <= stack2.top()->val)){
            TreeNode* node = stack1.top();
            stack1.pop();

            if(node->right){
                pushLeft(stack1, node->right);
            }

            ans.push_back(node->val); 
        }
        else{
            TreeNode* node = stack2.top();
            stack2.pop();

            if(node->right){
                pushLeft(stack2, node->right);
            }

            ans.push_back(node->val); 
        }
    }

    return ans;
}

int main() {
    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(4);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(0);
    root2->right = new TreeNode(3);

    vector<int> result = getAllElements(root1, root2);

    cout << "Merged Sorted Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    delete root1->left;
    delete root1->right;
    delete root1;
    delete root2->left;
    delete root2->right;
    delete root2;

    return 0;
}
