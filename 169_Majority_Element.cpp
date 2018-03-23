class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> u;
        
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(u[nums[i]]>nums.size()/2)
                return nums[i];     
        }
    }
};
