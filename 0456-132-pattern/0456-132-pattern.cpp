class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if (n<3) return 0;
        vector<int> n_j;//keep track of the nums[j]
        int n_k=INT_MIN;
        for(int i=n-1; i>=0; i--){
            if (nums[i]<n_k){
            //    cout<<"["<<nums[i]<<","<<n_j.back()<<","<<n_k<<"]\n";
                return 1;
            } 
            while(!n_j.empty() && n_j.back()<nums[i]){
                n_k=n_j.back();
                n_j.pop_back();
            } 
            n_j.push_back(nums[i]);
        }
        return 0;
    }
};