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
    bool areIdentical(TreeNode* s, TreeNode* t){
        if(!s && !t)
            return true;
        if((!s && t) || (s && !t))
            return false;
        
        
    return (s->val==t->val) && areIdentical(s->left,t->left) && areIdentical(s->right,t->right);
     
        
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(t==NULL) return true;
        if(s==NULL) return false;
        if(areIdentical(s,t))
            return true;
        
        return isSubtree(s->left,t) || isSubtree(s->right,t);
            
        }
    };
