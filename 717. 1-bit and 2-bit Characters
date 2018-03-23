class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int l=bits.size();
        bool out=true;
        if(bits[l-1]==1)
            return false;
        for(int i=0;i<l;i++){
            if(bits[i]==0)
                if(i==l-1){
                    out=true;
                    break;
                }
                 else   
                    continue;
            if(bits[i]==1){
                i++;
                if(i==l-1){
                    out=false;
                    break;
                }
                continue;
            }
        }
        return out;
    }
};
