class Solution {
public:
    char findTheDifference(string s, string t) {
        int hashtable1[256]={0};
        int hashtable2[256]={0};
        char c,out;
        for (int i=0;i<s.length();i++){
            c=s[i];
            hashtable1[c]++;
        }
        
        for(int i=0;i<t.length();i++){
            c=t[i];
            hashtable2[c]++;
        }
        
        for(int i=0;i<256;i++){
            if(hashtable1[i]!=hashtable2[i]){
                out=char(i);
            }
        }
        return out;
    }
};
