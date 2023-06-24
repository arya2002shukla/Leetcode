class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.length();
        int m= t.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(n==m){
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    return false;
                }
            }
        }
        else{
            return false;
        }
        return true;
    }
};