void moveZeroes(int* nums, int numsSize) {
    int index = 0;
    int i,j;
    for (i = 0;i < numsSize;i++){
        if(*(nums+i)!=0){
           
            *(nums+index) = *(nums+i);
             index++;
        }
    }
    
    int countZeros = numsSize - index;
    
    for(j = 0; j <countZeros; j++){
        *(nums+index+j) = 0;
    }
    
    
}
