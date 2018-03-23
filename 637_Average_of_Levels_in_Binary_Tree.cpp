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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode*> q;
        
        if(!root)
            return v;
        
        q.push(root);
        int count;
        double avg=0;
        TreeNode* t;
        while(!q.empty()){
            count=q.size();
            for(int i=0;i<count;i++){
                t=q.front();
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                avg+=t->val;
                q.pop();
            }
            avg=avg/(double)count;
            v.push_back(avg);
            avg=0;
        }
        
        return v;
    }
};
