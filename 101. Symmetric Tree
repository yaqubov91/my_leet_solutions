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
public: void mirror(TreeNode* root){
    if(root==NULL)
        return;
    
    
    
    TreeNode* temp=root->left;
    root->left=root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
    
}
    
    
public: bool isMirror(TreeNode* t1,TreeNode* t2){
    if(t1==NULL && t2==NULL)
        return true;
    if(t1==NULL || t2==NULL)
        return false;
    //if(t1->val!=t2->val)
    //    return false;
    if(t1->val==t2->val)
        return isMirror(t1->left,t2->right)&&isMirror(t1->right,t2->left);
        
    return false;
}    
    
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root,root);
    }
};
