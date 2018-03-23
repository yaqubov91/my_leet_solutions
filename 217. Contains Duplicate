#include <unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mymap;
        int l=nums.size();
        for (int i=0;i<l;i++){
            if(++mymap[nums[i]]>1)
                return true;
        }
        return false;
    }
};
