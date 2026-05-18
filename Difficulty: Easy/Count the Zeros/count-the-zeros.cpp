// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int start=0;
        int end=arr.size()-1;
        int first=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==0)
            {
                first=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        if(first==-1)
        return 0;
        else
        return arr.size()-first;
    }
};