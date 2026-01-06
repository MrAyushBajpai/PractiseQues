#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxLevelSum(TreeNode* root) {
    int maxSum = INT_MIN;
    int maxLevel = 1;
    int level = 1;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        int levelSum = 0;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* front = q.front();
            q.pop();

            levelSum += front->val;

            if (front->left)  q.push(front->left);
            if (front->right) q.push(front->right);
        }

        if (levelSum > maxSum) {
            maxSum = levelSum;
            maxLevel = level;
        }
        level++;
    }

    return maxLevel;
}

int main() {

    // ---------- Test Case 1 ----------
    // Tree:
    //        1
    //       / \
    //      7   0
    //     / \
    //    7  -8
    //
    // Level sums: [1, 7, -1]
    // Expected output: 2
    TreeNode* root1 = new TreeNode(1,
        new TreeNode(7,
            new TreeNode(7),
            new TreeNode(-8)
        ),
        new TreeNode(0)
    );

    cout << "Test Case 1 - Max Level: " << maxLevelSum(root1) << endl;

    // ---------- Test Case 2 ----------
    // Single node tree
    // Expected output: 1
    TreeNode* root2 = new TreeNode(5);

    cout << "Test Case 2 - Max Level: " << maxLevelSum(root2) << endl;

    // ---------- Test Case 3 ----------
    // Tree with negative values
    //        -10
    //        /  \
    //      -5   -3
    //
    // Level sums: [-10, -8]
    // Expected output: 2
    TreeNode* root3 = new TreeNode(-10,
        new TreeNode(-5),
        new TreeNode(-3)
    );

    cout << "Test Case 3 - Max Level: " << maxLevelSum(root3) << endl;

    // ---------- Test Case 4 ----------
    //        10
    //       /  \
    //      2    3
    //           \
    //            15
    //
    // Level sums: [10, 5, 15]
    // Expected output: 3
    TreeNode* root4 = new TreeNode(10,
        new TreeNode(2),
        new TreeNode(3, nullptr, new TreeNode(15))
    );

    cout << "Test Case 4 - Max Level: " << maxLevelSum(root4) << endl;

    return 0;
}
