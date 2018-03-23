class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0,cur=0;
        bool in=false;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cur=0;
            else if(nums[i]==1){
                cur++;
                if(cur>res)
                    res=cur;
            }
        }
        return res;
    }
};
