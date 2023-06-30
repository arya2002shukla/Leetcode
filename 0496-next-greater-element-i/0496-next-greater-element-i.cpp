// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums2.size();
//         int k=nums1.size();
//         map<int,int>map1;
//         for(int i=0;i<n;i++){
//             map1[nums2[i]]=i;
//         }
//         vector<int>pos;
//         vector<int>output;
//         for(int i=0;i<k;i++){
//             if(map1[nums1[i]]){
//                 pos.push_back(map1[nums1[i]]);
//             }
            
//         }

//         for(int i=0;i<n;i++){
//             if(nums2[pos[i]+1]<nums2[pos[i]]){
//                 output.push_back(-1);
//             }
//             else{
//                 output.push_back(nums2[pos[i]+1]);
               
//             }
//         }
//         return output;
//     }
// };
#include <vector>
#include <map>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        int n = nums2.size();
        int k = nums1.size();
        std::map<int, int> map1;
        for (int i = 0; i < n; i++) {
            map1[nums2[i]] = i;
        }
        std::vector<int> pos;
        std::vector<int> output;
        for (int i = 0; i < k; i++) {
            if (map1.find(nums1[i]) != map1.end()) {
                pos.push_back(map1[nums1[i]]);
            }
        }
        for (int i = 0; i < pos.size(); i++) {
            int index = pos[i];
            bool found = false;
            for (int j = index + 1; j < n; j++) {
                if (nums2[j] > nums2[index]) {
                    output.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                output.push_back(-1);
            }
        }
        return output;
    }
};
