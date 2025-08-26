class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int n1=s1.length();
        int n2=s2.length();
        int i=0;
        int j=0;
        while(j<n2)
        {
            if(s1[i]==s2[j])
            {
                i++;
            }
            j++;
        }
        if(i==n1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};