class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size(), M=0, sz;
        
        for(int i=0; i<n; i++){
            M=max(M, i+(int)nums[i].size());
            sz+=nums[i].size();
        }
        vector<vector<int>> diag(M+1);

        
        for(int i=0; i<n; i++){
            int col=nums[i].size();
            
            for(int j=0; j<col; j++){
                diag[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans(sz);
        int idx=0;
       
        for(int i=0; i<=M; i++){
           copy(diag[i].rbegin(), diag[i].rend(), ans.begin()+idx);
           idx+=diag[i].size();
        }
        return ans;
    }
};