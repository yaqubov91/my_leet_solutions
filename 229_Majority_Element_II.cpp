class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> output;
        unordered_map<int,int> u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        
        for ( auto it = u.begin(); it != u.end(); ++it ){
            if(it->second>nums.size()/3)
                output.push_back(it->first);
        }
        
        return output;
    }
};
