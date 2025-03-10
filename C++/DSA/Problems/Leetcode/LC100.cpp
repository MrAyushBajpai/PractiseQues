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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == nullptr && q == nullptr) return true;
    if(p == nullptr || q == nullptr) return false;

    if(p -> val != q -> val) return false;

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    TreeNode* tree1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* tree2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));

    cout << (isSameTree(tree1, tree2) ? "Trees are the same" : "Trees are different") << endl;

    delete tree1->left;
    delete tree1->right;
    delete tree1;
    delete tree2->left;
    delete tree2->right;
    delete tree2;

    return 0;
}
