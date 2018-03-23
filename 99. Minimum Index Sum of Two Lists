using namespace std;
#include<map>
#include<climits>
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> m1,m2;
        vector<string> out;
        for (int i=0;i<list1.size();i++){
            m1[list1[i]]=i;
        }
        
        for(int i=0;i<list2.size();i++){
            m2[list2[i]]=i;
        }
        
        int mymin=INT_MAX;
        for(int i=0;i<list1.size();i++){
            if(m2.find(list1[i])!=m2.end()){
                if((i+m2[list1[i]])<mymin){
                    mymin=i+m2[list1[i]];
                }
            }
        }
        for(int i=0;i<list1.size();i++){
            if(m2.find(list1[i])!=m2.end()){
            if((m2[list1[i]]+i)==mymin){
                out.push_back(list1[i]);
            }
        }}
    return out;
    }
    
};
