class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m=matrix[0].size();
    int n=matrix.size();
    int l = 0, r = m - 1;
    int t = 0, b = n - 1;
    vector<int>output;
    while (1)
    {
        if (l > r) {
            break;
        }
        for (int i = l; i <= r; i++) {
            output.push_back(matrix[t][i]);
        }
        t++;
 
        if (t > b) {
            break;
        }
        for (int i = t; i <= b; i++) {
            output.push_back(matrix[i][r]);
        }
        r--;
 
        if (l > r) {
            break;
        }
        for (int i = r; i >= l; i--) {
            output.push_back(matrix[b][i]);
        }
        b--;
 
        if (t > b) {
            break;
        }
        for (int i = b; i >= t; i--) {
           output.push_back(matrix[i][l]);
        }
        l++;
    }
 
    return output;
}
        
};