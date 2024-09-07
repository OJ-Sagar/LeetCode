class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m*n)
            return {};
        vector<vector<int>> p(m, vector<int>(n,0));
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                p[i][j] = original[k++];
            }
        }
        return p;
    }
};