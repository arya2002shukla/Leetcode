// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         map<int,int> m;
//         int s = nums.size();
//         for(int i=0;i<s;i++){
//             m[nums[i]]++;
//         }

//         for(auto i:m){
//             if(i.second > 2){
//                 i.second=2;
//             }
//         }

//         nums.clear();

//         for(auto i:m){
//             for(int j = 0; j<i.second;j++){
//                 nums.push_back(i.first);
//             }
//         }

//         int k = nums.size();
//         return k;
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        nums.clear();

        for (auto i : m) {
            for (int j = 0; j < min(i.second, 2); j++) {
                nums.push_back(i.first);
            }
        }

        int k = nums.size();
        return k;
    }
};
