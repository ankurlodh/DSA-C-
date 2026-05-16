class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        for(int i=arr.size()-2;i>=0;i--)
        {
            bool swapped=false;
            for(int j=0;j<=i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                }
            }
            if(swapped==false)
            {
                break;
            }
        }
    }
};