class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int num_size = nums.size();
        int left_sum, right_sum;
        //loop the whole thing looking for suitable pivot
        for(int i=0; i<num_size; i++){
            left_sum = 0;
            right_sum = 0;
            //see if you can find a pivot by calculating left and right halves    
            for(int j=0; j<i;j++){
                left_sum = left_sum + nums[j];
            }

            for(int k=i+1;k<num_size;k++){
                right_sum = right_sum + nums[k];
            }
            //compare them
            //printf("%d,%d\n", left_sum, right_sum);
            if(left_sum==right_sum) return i;
        }
        return -1;
    }
};