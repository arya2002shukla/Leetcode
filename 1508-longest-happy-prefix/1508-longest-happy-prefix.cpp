// class Solution {
// public:
//     string longestPrefix(string s) {
//         map<string,int>m;
//         int n = s.length();
//         int low=0;
//         vector<string>v;
//         string y="";
//         int i=1,k=0;
//         while(i<n){
//             y=s.substr(low,i);
//             v.push_back(y);
//             k++;
//             i++;
//             y="";
//         }
//         string t="";
//         vector<string>g;
//         int high= n-1;
//         int j=1;
//         while(j<n){
//             t=s.substr(j,high);
//             g.push_back(t);
//             j++;
//             t="";
//         }
//         string h="";
//         int max=0;
//         reverse(g.begin(),g.end());
//         for(int i=0;i<g.size();i++){
//             if(v[i]==g[i] && max<v[i].length()){
//                 h=v[i];
//                 max = v[i].length();
//             }
//         }

//         if(h!=""){
//             return h;
//         }

//         return "";
//     }
// };
class Solution {
public:
    string longestPrefix(string s) {
        int n = s.length();
        vector<int> lps(n, 0);
        int len = 0;  // Length of the longest proper prefix which is also a suffix
        int i = 1;
        
        // Construct the LPS array
        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if (len != 0) {
                    len = lps[len - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        
        // The length of the longest prefix which is also a suffix
        int longestPrefixLength = lps[n - 1];
        
        if (longestPrefixLength > 0) {
            return s.substr(0, longestPrefixLength);
        }
        
        return "";
    }
};


