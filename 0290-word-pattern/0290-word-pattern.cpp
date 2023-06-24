// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
//         map<char,string>m;
//         bool flag = false;
//         string v="";
//         for(int i=0;i<pattern.length();i++){
//             for(int j=0;j<s.length();j++){
//                 if(s[j]!=' '){
//                     v+=s[j];
//                     flag=true;
//                 }
//                 else{
//                     if(flag){
//                         m[pattern[i]]=v;
//                         break;
//                     }
//                     v="";
//                     flag=false;

//                 }
                
//             }
//         }
//         if(flag){
//             m[pattern[pattern.length()-1]]=v;
//         }
        
//         for(int i=0;i<pattern.length()-1;i++){
//             if(pattern[i]!=pattern[i+1]){
//                 if(m[pattern[i]]==m[pattern[i+1]]){
//                     return false;
//                 }
//             }
//         }
//         string v2="";
//         for(int i=0;i<pattern.length();i++){
//             if(i!=pattern.length()-1){
//                 v2+=m[pattern[i]]+" " ;     
//             }
//             else{
//                 v2+=m[pattern[i]];
//                 break;
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
        unordered_map<char, int> p2i;
        unordered_map<string, int> w2i;
        istringstream in(s); string word;
        int i = 0, n = pattern.size();
        for(word; in>>word; i++){
            if(i==n || p2i[pattern[i]] != w2i[word]) return false;
            p2i[pattern[i]] = w2i[word] = i+1;
        }
        return i==n; 
    }
};
