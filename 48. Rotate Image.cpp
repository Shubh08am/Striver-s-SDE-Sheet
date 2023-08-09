class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // brute -> ans[j][n-i-1]  -> matrix[i][j] -> o(n2) both tc and sc
        // optimized -> transpose the matrix -> reverse every row -> o(n2)tc o(1) sc
        int n = matrix.size() ; 

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]) ;
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        //   int start=0,end=n-1;
        //   while(start<end) swap(matrix[i][start++],matrix[i][end--]);
        }
    }
};
