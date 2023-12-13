class Solution {
public:
     int numSpecial(vector<vector<int>>& mat) {
        int m =mat[0].size();
        int pos=-1;
        int n =mat.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
//check for number on 1 in each row
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) {
                   count++; 
                   pos=j;
                }
            }
// if there's only one 1 in row ,then we will count total 1 in column
            if(count==1){
                count=0;//to count no. of 1 from beginning or you can compare count==2 at last.
                for(int k=0;k<n;k++){
                    if(mat[k][pos]==1) count++;
                }
//if total 1 in a column = 1, ans++
                if(count==1) ans++;
            }
        }
        return ans;
    }
};