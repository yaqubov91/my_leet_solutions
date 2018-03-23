class Solution {
public:
    int longestPalindrome(string s) {
        int hashs[256]={0};
        char c;
        for(int i=0;i<s.size();i++){
            c=s[i];
            hashs[c]++;
        }
        int count=0;
        for (int i=0;i<256;i++){
            count+=hashs[i]-(hashs[i]%2);
        }
        
        for(int i=0;i<256;i++){
            if(hashs[i]%2==1){
                count++;
                break;
            }
        }
        
        return count;
        
    }
};
