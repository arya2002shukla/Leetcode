class Solution {
public:

    int dp[105];
    int helper(string s, int i){
        if(i>=s.length()) return 1;
        if(i==s.length()-1){
            if(s[i]!='0') return 1;
            else return 0;
        }

        if(dp[i]!=-1) return dp[i];

        int a=0,b=0;
        if(s[i]!='0') a = helper(s,i+1);
        int x = stoi(s.substr(i,2));
        if(x>=10 && x<=26) b = helper(s,i+2);
        return dp[i] = a+b;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof dp);
        return helper(s,0);
    }
};