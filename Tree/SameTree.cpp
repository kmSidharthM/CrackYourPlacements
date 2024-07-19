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
    bool sameTree(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL)
            return true;
        else if ((p == NULL || q == NULL) || (p->val != q->val))
            return false;
        bool lt = sameTree(p->left, q->left);
        bool rt = sameTree(p->right, q->right);

        return lt&rt;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans;
        ans = sameTree(p, q);
        return ans;
    }
};