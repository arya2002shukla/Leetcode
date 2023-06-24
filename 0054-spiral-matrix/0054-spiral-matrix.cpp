class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l=0,p=m-1;
        int t=0,b=n-1;
        vector<int>output;
        while(1){
        for(int i=l;i<=p;i++){
            output.push_back(matrix[l][i]);
        }
        t++;
        if(t>b){
            break;
        }
        for(int i=t;i<=b;i++){
            output.push_back(matrix[i][p]);
        }
        p--;
        if(l>p){
            break;
        }
        for(int i=p;i>=l;i--){
            output.push_back(matrix[b][i]);
        }
        b--;
        if(t>b){
            break;
        }
        for(int i=b;i>=t;i--){
            output.push_back(matrix[i][l]);
        }
        l++;
        if(l>p){
            break;
        }
        }

        return output;
    }
};