class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int res =-1;
        
        int st=0;
        int end = nums.size()-1;
        
        while(st<=end){
            
            int mid = st +(end-st)/2;
            
            if(nums[mid]==target){
                res = mid;
                end = mid-1;
                //we traverse left for minimum index.
            }
            
            else if(nums[mid]>target)end = mid-1;
            
            else st = mid+1;
            
        }
        
        ans.push_back(res);
        
        int s =0;
        int en = nums.size()-1;
        int ress=-1;
        
        while(s<=en){
            int m = s +(en-s)/2;
            if(nums[m]==target){
                ress = m;
                s =m+1;
                //we traverse right for maximum index.
            }
            
            else if(nums[m]>target)en = m-1;
            
            else s = m+1;
            
        }
        
        ans.push_back(ress);
        return ans; 
    }
};