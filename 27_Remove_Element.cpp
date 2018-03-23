class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=nums.size();
        int count=0;
        for(int i=0;i<l;i++){
            
            if(nums.at(i-count)==val)
            {
                nums.erase(nums.begin()+i-count);
                count++;
            }
            
        }
        return nums.size();
    }
};
