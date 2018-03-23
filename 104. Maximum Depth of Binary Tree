/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    int mymax(int a,int b){
        if(a>b)
            return a;
        else
            return b;
    }
    
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return 1+mymax(maxDepth(root->left),maxDepth(root->right));
        
        
    }
};
