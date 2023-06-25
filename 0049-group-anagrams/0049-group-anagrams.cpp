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









































