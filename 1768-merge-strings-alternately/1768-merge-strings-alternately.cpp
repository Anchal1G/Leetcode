class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n = w1.size();
        int m = w2.size();
        
        int i=0,j=0;
        
        string ans = "";
        int k =0;
        
        while(i<n && j<m){
            ans+= w1[i++];
            ans+= w2[j++];
        }
        while(i<n){
            ans+= w1[i++];
        }
        while(j<m){
            ans+= w2[j++];
        }
        return ans;
    }
};