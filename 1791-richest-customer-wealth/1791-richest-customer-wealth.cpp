class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int max=0;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=sum+accounts[i][j];
            }
            if(max<sum){
                max=sum;
            }
            sum=0;
        }


        return max;
    }
};