class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int,int> map;
        
        for(int i = 0; i < len; i++){
            if(map.find(target - nums[i]) != map.end()){
                return {i, map[target-nums[i]]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};