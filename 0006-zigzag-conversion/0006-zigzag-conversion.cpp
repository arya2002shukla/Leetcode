class Solution {
public:
    string convert(string s, int n) {
        if(n==1)
        return s;
        vector<string>ans(n);
        int flag=1;
        int j=0;
        for(auto it:s){
            if(flag==1){
                ans[j]+=it;
                j++;
                if(j==n){
                    j-=2;
                    flag=2;
                }
            }
            else{
                ans[j]+=it;
                j--;
                if(j==-1){
                    j+=2;
                    flag=1;
                }
            }
        }
        string finalans;
        for(auto str:ans)
            finalans+=str;
        return finalans;

    }
};