class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele:nums)mp[ele]++;
        sort(nums.begin() , nums.end());
        int ind = 0, min = nums[0],n = nums.size();
        while(ind<n and nums[ind] == min) ind++;
        if(ind>=n) return 0;
        int sum = 0;
        int prev = -1e9;
        for(int i=  n-1; i>=ind; i--){
            if(nums[i]==prev) continue;
            sum  +=  mp[nums[i]] + (n-1-i);
            prev = nums[i];
        }
        return sum;
    }
};