class Solution {
public:
    unordered_map<char,vector<char>>mp;
    int mod = 1e9+7;
    int ways(int i,int &n,char val,vector<vector<int>>&dp){
        if(i==n-1){
            return 1;
        }
        else if(dp[i][val-'a']!=0){
            return dp[i][val-'a'];
        }
        else{
            for(auto it : mp[val]){
                dp[i][val-'a']+=ways(i+1,n,it,dp);
                dp[i][val-'a']%=mod;
            }
            return dp[i][val-'a'];
        }
    }
    int countVowelPermutation(int n) {
       ios_base::sync_with_stdio(0);
        mp['a'] = {'e'};
        mp['e'] = {'a','i'};
        mp['i'] = {'a','e','o','u'};
        mp['o'] = {'i','u'};
        mp['u'] = {'a'};
        vector<vector<int>>dp(n,vector<int>(26,0));
        int ans = 0;
        vector<char>vowels = {'a','e','i','o','u'};
        for(auto it : vowels){
            ans+=ways(0,n,it,dp);
            ans%=mod;
        }
        return ans%mod;
    }
};