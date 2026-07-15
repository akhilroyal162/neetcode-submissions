class Solution {
public:
    int findMin(vector<int> &nums) {
        int n= nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(high>=low)
        {
            mid=low+(high-low)/2;
            if(nums[mid]>=nums[low]){
                if(nums[low]<=nums[high]){
                    return nums[low];
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<=nums[mid-1])
                {
                   return nums[mid]; 
                }
                else{
                    high=mid-1;  
                }
            }

        }

        
    }
};









































