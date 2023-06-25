// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<string,int>m;
//         map<string,int>map;
//         vector<vector<string>>v;
//         vector<string>output;
//         vector<string>l;

    
//         for(int i=0;i<strs.size();i++){
//             l.push_back(strs[i]);
//             sort(strs[i].begin(),strs[i].end());
//             m[strs[i]]++;
            
//         }
        
//         for(int i=0;i<l.size();i++){
//             string b=l[i];
//             sort(l[i].begin(),l[i].end());
//             map[b]=m[l[i]];
//         }

//         for(auto i:map){
//             for(int k=0;k<i.second;k++){
//                 output.push_back(i.first);
//             }
//             v.push_back(output);
//             output.clear();
//         }
        
//         return v;
//     }
// };
#include <vector>
#include <string>
#include <map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> v;
        vector<vector<string>> output;

        for (auto str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            v[sortedStr].push_back(str);
        }

        for (auto i : v) {
            output.push_back(i.second);
        }

        return output;
    }
};
