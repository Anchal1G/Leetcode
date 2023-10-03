class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        
        int cnt =0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(i<j && nums[i]==nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};