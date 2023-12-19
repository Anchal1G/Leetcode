class Solution {
public:
    vector<vector<int>> img;
    int m, n;

    int sum9(int i, int j) {
        int sum= 0;
        for (int k= i-1; k <= i+1; k++) {
            for (int l= j-1; l <= j+1; l++)
                sum+= img[k][l];
        }
        return sum;
    }

    int avborder(int i, int j) {
        int sum = 0;
        int k0 = max(i-1, 0), k1 =min(m-1, i+1);
        int l0 = max(j-1, 0), l1 =min(n-1, j+1);
        int q=0;
        for (int k = k0; k <= k1; k++) {
            for (int l = l0; l <= l1; l++){
                sum += img[k][l];
                q++;
            }
        }
        return sum/q;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        this->img = img;
        m = img.size(), n = img[0].size();
        
        vector<vector<int>> img2(m, vector<int>(n));

        for (int i=1; i < m-1; i++) {
            img2[i][0] = avborder(i, 0);
            img2[i][n-1] = avborder(i, n-1);
            for (int j = 1; j < n-1; j++) {
                img2[i][j] = sum9(i, j) / 9;
            }
        }

        for (int j = 1; j < n-1; j++) {
            img2[0][j] = avborder(0, j);
            img2[m-1][j] = avborder(m-1, j) ;
        }

        img2[0][0] = avborder(0, 0);
        img2[0][n-1] = avborder(0, n-1);
        img2[m-1][0] = avborder(m-1, 0);
        img2[m-1][n-1] = avborder(m-1, n-1);

        return img2;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
