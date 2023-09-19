class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(nums.size()+1,0);
        int n = nums.size();
        int cnt=1;
        
        for(int i=0;i<n;i++){
            freq[nums[i]]=freq[nums[i]]+1;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>=2){
                cnt=i;}
        }
        return cnt;
    }
};