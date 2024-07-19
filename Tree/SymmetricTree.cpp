#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool symmetric(TreeNode* root, TreeNode* root1){
        if(root == NULL && root1 == NULL)
            return true;
        else if ((root == NULL || root1 == NULL) || (root->val != root1->val))
            return false;
        bool sym1 = symmetric(root->left, root1->right);
        bool sym2 = symmetric(root->right, root1->left);
        
        return sym1 & sym2;
    }

    bool isSymmetric(TreeNode* root) {
        bool ans;
        ans = symmetric(root->left, root->right);
        return ans;
    }
};