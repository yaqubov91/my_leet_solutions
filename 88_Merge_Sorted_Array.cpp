class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int count=0;
        while(i>=0 && j>=0){
        //while(count<n+m)
            if(nums1[i]>nums2[j]){
                nums1[n+m-1-count]=nums1[i];
                i--;
                count++;
            }
            else{
                if(nums1[i]<nums2[j]){
                   nums1[n+m-1-count]=nums2[j]; 
                   j--;
                    count++;
                }
                else if(nums1[i]==nums2[j]){
                    nums1[n+m-1-count]=nums2[j];
                    nums1[n+m-1-count-1]=nums1[i];
                    i--;
                    j--;
                    count+=2;
                        
                }
            }
        }
        if(i>=0){
            while(i>=0){
                nums1[n+m-1-count]=nums1[i];
                i--;
                count++;
            }
        }
        if(j>=0){
            while(j>=0){
                nums1[n+m-1-count]=nums2[j];
                j--;
                count++;
            }
        }
        
        //return nums1
        
        
    }
};
