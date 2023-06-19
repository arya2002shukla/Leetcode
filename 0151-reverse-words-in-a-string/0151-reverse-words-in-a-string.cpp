// class Solution {
// public:
//     string reverseWords(string s) {
//         int l = s.length();
//         bool flag = false;
//         string v="";
//         string ans="";
//         for(int i=l-1;i>=0;i--){
//             if(s[i]!=' '){
//                 v+=s[i];
//                 flag=true;
//             }
//             else{
//                 if(flag){
//                     for(int i=v.length()-1;i>=0;i--){
//                         if(v[i]!=' '){
//                             ans+=v[i];
//                         }
//                     }
//                     v="";
//                     ans+=' ';
                    
//                 }
//                 flag=false;
//             }
            
//         }
//         if(flag){
//                 for(int j=v.length()-1;j>=0;j--){
//                        if(v[j]!=' '){
//                            ans+=v[j];
//                        }
//                 }
//             }
    
//         return ans;

        
//     }
// };
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        bool flag = false;
        string v = "";
        string ans = "";
        for (int i = l - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                v += s[i];
                flag = true;
            } else {
                if (flag) {
                    for (int j = v.length() - 1; j >= 0; j--) {
                        if (v[j] != ' ') {
                            ans += v[j];
                        }
                    }
                    v = "";
                    ans += ' ';
                }
                flag = false;
            }
        }
        if (flag) {
            for (int j = v.length() - 1; j >= 0; j--) {
                if (v[j] != ' ') {
                    ans += v[j];
                }
            }
        }
        int start = 0;
        while (start < ans.length() && ans[start] == ' ') {
            start++;
        }
        int end = ans.length() - 1;
        while (end >= 0 && ans[end] == ' ') {
            end--;
        }
        ans = ans.substr(start, end - start + 1);
        
        return ans;
    
    }
};
