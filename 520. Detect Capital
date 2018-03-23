class Solution {
public:
    bool isCapital(char c){
        if(c<='Z' && c>='A')
            return true;
        return false;
    }
    bool detectCapitalUse(string word) {
        if(word.size()==1)
            return true;
        if(word.size()==2){
            if(isCapital(word[1] && !isCapital(word[0])))
                return false;
            else if(!isCapital(word[0]) && isCapital(word[1]))
                return false;
            else 
                return true;
        }
        
        if(isCapital(word[0]) && isCapital(word[1])){
            for (int i=2;i<word.size();i++){
                if(!isCapital(word[i]))
                    return false;
            }
        }
        if(isCapital(word[0]) && !isCapital(word[1])){
            for(int i=2;i<word.size();i++){
                if(isCapital(word[i]))
                    return false;
            }
        }
        
        if(!isCapital(word[0])){
            for(int i=1;i<word.size();i++){
                if(isCapital(word[i]))
                    return false;
            }
        }
        return true;
    }
};
