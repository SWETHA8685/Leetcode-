class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i=0;
        int j=0;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
               swap(matrix[i][j],matrix[j][i]);

            }
        }
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};