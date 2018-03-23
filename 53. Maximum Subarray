#include<climits>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=nums.size();
        if(l==1)
            return nums[0];
        vector<int> Maxs;
        for (int i=0;i<l;i++)
            Maxs.push_back(nums[i]);
        Maxs[0]=nums[0];
        for(int i=1;i<l;i++){
            if(Maxs[i-1]+nums[i]>Maxs[i])
                Maxs[i]=Maxs[i-1]+nums[i];
        }
        
        int rmax=INT_MIN;
        for(int i=0;i<l;i++){
            if(rmax<Maxs[i])
                rmax=Maxs[i];
        }
        return rmax;
    }
};
