class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int x=h/piles.size();
        auto max_i=max_element(piles.begin(),piles.end());
        int max=*max_i;
        int high=max/x +((max%x==0)?0:1);
        int mid,ans=1;
        while(high>=low)
        {
            mid=low+(high-low)/2;
            if (total_hr(piles,mid)>h)
            {
               
                low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans  ;
    }
    long long total_hr(vector<int>& piles,int mid)
    {
        long long totalhr=0;
        for(int i=0;i<piles.size();i++)
        {
            totalhr+=piles[i]/mid + ((piles[i]%mid==0)?0:1);
        }
        return totalhr;
    }
};
