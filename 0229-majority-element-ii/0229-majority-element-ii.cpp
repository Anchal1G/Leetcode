class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> a;
        unordered_map<int,int> map;
        for(auto x : nums ){
            map[x]++;
        }
        int n = nums.size();
        for(auto x : map){
            if(x.second>n/3)a.push_back(x.first);
        }
        return a;
    }
};