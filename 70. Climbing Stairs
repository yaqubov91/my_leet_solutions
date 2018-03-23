class Solution {
public:
    int climbStairs(int n) {
        int* distincts=(int*)malloc((n+1)*sizeof(int));
        distincts[0]=0;
        distincts[1]=1;
        distincts[2]=2;
        for(int i=3;i<=n;i++)
            distincts[i]=distincts[i-1]+distincts[i-2];
        
        return distincts[n];
        
        /*
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        
        
        return climbStairs(n-1)+climbStairs(n-2);*/
    }
};
