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

class BSTIterator {
public:
    stack<TreeNode*> s;
    void pushLeft(TreeNode* root) {
        while(root != nullptr){
            s.push(root);
            root = root -> left;
        }
    }

    BSTIterator(TreeNode* root) { pushLeft(root); }

    int next() {
        TreeNode* temp = s.top();
        s.pop();
        if (temp->right) {
            pushLeft(temp->right);
        }
        return temp->val;
    }

    bool hasNext() { return !s.empty(); }
};

int main() {
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    BSTIterator iterator(root);
    cout << "BSTIterator traversal: ";
    while (iterator.hasNext()) {
        cout << iterator.next() << " ";
    }
    cout << endl;

    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}