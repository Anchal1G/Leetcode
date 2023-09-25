class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mpp;
        for(auto x:s)
        {
            mpp[x]++;
        }
        for(auto x:t)
        {
            if(mpp.find(x)!=mpp.end())
            {
                mpp[x]--;
             if(mpp[x]<0)
                return x;//agar ek letter 2 baar hua tab
            }
             else
                return x;
        }
        return '0';
    }
};