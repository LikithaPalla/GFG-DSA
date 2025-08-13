class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int req=(n+1)/2;
        vector<int> need;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%k==0)
            {
                req--;
            }
            else
            {
                need.push_back(k-(arr[i]%k));
            }
        }
        if(req<=0)
        {
            return 0;
        }
        int add=0;
        sort(need.begin(),need.end());
        for(int i=0;i<need.size();i++)
        {
            if(req!=0)
            {
                add += need[i];
                req--;
            }
        }
        return add;
    }
};