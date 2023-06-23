// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         map<char,bool>m;
//         for(int i=0;i<n;i++){
//             m[s[i]]=false;
//         }
//         if(m.size()==1){
//             return 1;
//         }
//         string v="";
//         int max=0;
//         for(int i=0;i<n;i++){
//             if(!m[s[i]]){
//                 v+=s[i];
//                 m[s[i]]=true;
//             }
//             else{
//                 if(max<v.length()){
//                     max=v.length();
//                 }
//                 int j=0;
//                 while(j<m.size()){
//                     m[s[j]]=false;
//                     j++;
//                 }
//                 v="";
//                 v+=s[i];
//                 m[s[i]]=true;
                
                
//             }

//         }
//         if(max<v.length()){
//             max=v.length();
//         }
//         return max;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char, bool> m;
        string v = "";
        int max = 0;
        
        for (int i = 0; i < n; i++) {
            if (!m[s[i]]) {
                v += s[i];
                m[s[i]] = true;
            } else {
                max = ::max(max, static_cast<int>(v.length()));
                int j = 0;
                while (v[j] != s[i]) {
                    m.erase(v[j]);
                    j++;
                }
                v = v.substr(j + 1);
                v += s[i];
            }
        }
        
        max = ::max(max, static_cast<int>(v.length()));
        return max;
    }
};
