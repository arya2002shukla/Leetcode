// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
//         map<char,string>m;
//         bool flag = false;
//         string v="";
//         string y="";
//         for(int i=0;i<pattern.length();i++){
//             for(int j=0;j<s.length();j++){
//                 if(s[j]!=' '){
//                     v+=s[j];
//                     flag=true;
//                 }
//                 else{
//                     if(flag){
//                         m[pattern[i]]=v;
//                     }
//                     v="";
//                     flag=false;
//                 }
//             }
//         }
//         if(flag){
//             m[pattern[pattern.length()-1]]=v;
//         }
//         string v2="";
//         for(int i=0;i<pattern.length()-1;i++){
//             if(pattern[i]!=pattern[i+1]){
//                 if(m[pattern[i]]==m[pattern[i+1]]){
//                     return false;
//                 }
//             }
//         }
//         for(int i=0;i<pattern.length();i++){
//             if(i!=pattern.length()-1){
//                 v2+=m[pattern[i]]+" " ;     
//             }
//             else{
//                 v2+=m[pattern[i]];
//             }
           
//         }
        

//         if(v2==s){
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> m;
        bool flag = false;
        string v = "";
        int k = 0;
        for (int i = 0; i < pattern.length(); i++) {
            for (int j = k; j < s.length(); j++) {
                if (s[j] != ' ') {
                    v += s[j];
                    flag = true;
                } else {
                    k = j + 1;
                    break;
                }
            }
            
            if (flag) {
                if (m.find(pattern[i]) != m.end()) {
                    if (m[pattern[i]] != v) {
                        return false;
                    }
                } else {
                    for (auto it = m.begin(); it != m.end(); ++it) {
                        if (it->second == v) {
                            return false;
                        }
                    }
                    m[pattern[i]] = v;
                }
                v = "";
                flag = false;
            }
        }
        
        string v2 = "";
        k = 0;
        for (int i = 0; i < pattern.length(); i++) {
            for (int j = k; j < s.length(); j++) {
                if (s[j] != ' ') {
                    v2 += s[j];
                } else {
                    k = j + 1;
                    break;
                }
            }
            if (i != pattern.length() - 1) {
                v2 += " ";
            }
        }
        
        return v2 == s;
    }
};
