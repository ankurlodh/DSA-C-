class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int i;
        int ans=-1;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
            }
        }
        int second=-1;
        for(i=0;i<arr.size();i++)
        {
            if(ans!=arr[i])
            {
                 second=max(second,arr[i]);
            }
        }
        return second;
        
    }
};