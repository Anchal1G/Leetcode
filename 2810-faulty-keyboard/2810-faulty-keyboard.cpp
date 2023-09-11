class Solution {
public:
    string finalString(string s) {
        string ans = "";
        
        int n = s.size();
        for(int j=0;j<n;j++){
            if(s[j] == 'i' ){
                reverse(ans.begin(), ans.end());
            }
            else{
                ans +=s[j];
            }
        }
        return ans;
    }
};