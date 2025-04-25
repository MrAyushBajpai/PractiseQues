#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
    
Node* newNode(int val) {
    return new Node(val);
}

int MAX_DIAMETER = INT_MIN;
int diameterFinder(Node* root) {
    if(root == nullptr) return 0;

    int left = diameterFinder(root->left);
    int right = diameterFinder(root->right);

    if(left + right + 1 > MAX_DIAMETER){
        MAX_DIAMETER = left + right + 1;
    }

    return max(left, right) + 1;
}

int diameter(Node* root) {
    if (root == nullptr) return 0;
    diameterFinder(root);
    return MAX_DIAMETER - 1;
}

int main() {
    auto runTest = [](Node* root, int expected, const string& testName) {
        MAX_DIAMETER = INT_MIN; // Reset global max
        int result = diameter(root);
        cout << testName << " | Expected: " << expected 
             << " | Result: " << result 
             << (result == expected ? " [PASS]" : " [FAIL]") << endl;
    };

    runTest(nullptr, 0, "Test 1: Empty tree");

    Node* root2 = newNode(1);
    runTest(root2, 0, "Test 2: Single node");

    Node* root3 = newNode(1);
    root3->left = newNode(2);
    runTest(root3, 1, "Test 3: Two nodes");

    Node* root4 = newNode(1);
    root4->left = newNode(2);
    root4->right = newNode(3);
    root4->left->left = newNode(4);
    root4->left->right = newNode(5);
    runTest(root4, 3, "Test 4: Balanced tree");

    Node* root5 = newNode(1);
    root5->left = newNode(2);
    root5->left->left = newNode(3);
    root5->left->left->left = newNode(4);
    runTest(root5, 3, "Test 5: Left-skewed tree");

    Node* root6 = newNode(1);
    root6->left = newNode(2);
    root6->right = newNode(3);
    root6->left->left = newNode(4);
    root6->left->left->left = newNode(5);
    root6->right->right = newNode(6);
    runTest(root6, 5, "Test 6: Longest path not through root");

    return 0;
}

