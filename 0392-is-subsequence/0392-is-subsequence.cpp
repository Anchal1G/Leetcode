class Solution {
public:
    bool subs(string s,string t , int n,int m){
        if(n==0)return true;
        if(m==0)return false;
        if(s[n-1]==t[m-1])
            return subs(s,t,n-1,m-1);
        else
            return subs(s,t,n,m-1);
    }
public:
    bool isSubsequence(string s, string t) {
        if(subs(s,t,s.length(),t.length()))return true;
        
        return false;
    }
};