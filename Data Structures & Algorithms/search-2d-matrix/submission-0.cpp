class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low =0;
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        int high=n;
        int mid,ans=0;
        while(high>=low)
        {
            mid = low + (high - low) / 2;
            if(matrix[mid][0]==target)
            return 1;
            if(matrix[mid][0]<=target)
            {
                ans=mid;
                low=mid+1;
            }
            else
            high = mid -1;
        }
        if(target>matrix[0][0]&&target<=matrix[n][m]){
            if(row(matrix,target,ans,n,m)==1)
             return 1;
        }
       
        return 0;
        
    }
   int row(vector<vector<int>>&matrix,int target,int ans ,int n,int m){
    int low=0;
    int high=m;
    int mid;
    while(low<=high)
    {
        mid = low + (high - low) / 2;
        if(matrix[ans][mid]==target)
        return 1;
        if(matrix[ans][mid]<=target)
        low=mid+1;
        else
        high=mid-1;
    }
    return 0;

   }
};
