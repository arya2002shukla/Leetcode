class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        if(t==s){
            return true;
        }
        bool fl = true;
        map<char,char> mp;
        for(int i=0;i<s.length();i++){
            if(m[s[i]]){
                if(t[i] != m[s[i]]){
                    fl = false;
                    break;
                }
            }
            if(mp[t[i]] && s[i] != mp[t[i]]){
                fl = false;
                break;
            }
            m[s[i]] = t[i];
            mp[t[i]] = s[i];
        }
        return fl;
    }
};