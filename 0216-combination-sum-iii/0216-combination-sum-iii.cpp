class Solution {
public:
    vector<vector<int>> solve(vector<vector<int>>&ans,vector<int>&pnc,int sum,int ind, int k, int n){
        if(pnc.size()==k){
            if(sum==n){
                ans.push_back(pnc);
            }
            return ans;
        }

        for(int i=ind;i<=9;i++){
            if(i>n){
                break;
            }
            sum+=i;
            pnc.push_back(i);
            solve(ans,pnc,sum,i+1,k,n);
            pnc.pop_back();
            sum=sum-i;
        }

        return ans;

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>pnc;
        int sum=0;
        return solve(ans,pnc,sum,1,k,n);
    }
};