class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> temp;
        for(int n:arr)
        {
            temp.push_back(to_string(n));
        }
        
        sort(temp.begin(),temp.end(), [](const string &a, const string &b) {
            return a + b > b + a;
        });
        
        string result="";
        for(string s: temp)
        {
            result += s;
        }
        
        if(!result.empty() && result[0]=='0') 
        {
            return "0";
        }
        
        return result;
    }
};