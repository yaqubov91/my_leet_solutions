class Solution {
public:
    int lengthOfLastWord(string s) {
    
    
    
    
    int l=s.length();
    if(l==0)
        return 0;
    int e=l-1;
    while(s[e]==' ')
        e--;
    
    if(e==-1)
        return 0;
    int i;
    for (i=e;i>=0;i--){
            if(s[i]==' ')
                break;
        }
    return e-i;
    
    }
    
    
};
