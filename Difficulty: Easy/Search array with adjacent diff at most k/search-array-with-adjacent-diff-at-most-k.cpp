// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int i=0;
        while(i<arr.size()) 
        {
            if(arr[i]==x)
            {   
                return i; 
            }
            int step=abs(arr[i]-x)/k;
            if(step==0) 
            {   
                step=1;
            }   
            i+=step;
        }
        return -1;
    }
};