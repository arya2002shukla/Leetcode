class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s = matrix.size();
        
        
        vector<vector<int>> rotate;
        for(int j=0;j<s;j++){
            vector<int>v1;
            for(int i=s-1;i>=0;i--){
                v1.push_back(matrix[i][j]);
            }
            rotate.push_back(v1);
        }

        matrix.clear();

        for(int i=0;i<s;i++){
            vector<int>v2;
            for(int j=0;j<s;j++){
                v2.push_back(rotate[i][j]);
            }
            matrix.push_back(v2);
        }
        
    }
};