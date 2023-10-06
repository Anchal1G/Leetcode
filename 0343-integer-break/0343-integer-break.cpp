class Solution {
public:
    int integerBreak(int n) {
         if (n<=3) return n-1;
        //Note 2^3=8<3^2, n=3*k+r where r=0, 2, 4
        auto [k, r]=div(n, 3);
        if (r==1){//Only this needs modification
            r=4, k--;
        }
        int ans=pow(3, k);
        if (r>0) ans*=r;
        return ans;
    }
};