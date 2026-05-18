class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int start=1;
        int end=n;
        int temp;
        if(n<2)
        return n;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid*mid==n/mid)
            {
                temp=mid;
                break;
            }
            else if(mid*mid<n/mid)
            {
                temp=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return temp;
        
    }
};