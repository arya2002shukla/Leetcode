class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = t.length();
        int v = s.length();
        int count=0;
        if(v>l){
            return false;
        }
        int j=0;
        for(int i=0;i<l;i++){
            if(s[j]==t[i]){
                count++;
                j++;
            }
        }
        if(count==v){
            return true;
        }

        return false;
    }
};