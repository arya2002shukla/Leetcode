// class Solution {
// public:
//     int minOperations(vector<int>& nums, vector<int>& numsDivide) {
//         int n = nums.size();
//         int m = numsDivide.size();

//         sort(nums.begin(), nums.end());

//         int k = 0, l = 0, operations = 0;

//         while (k < n && l < m) {
//             if (numsDivide[l] % nums[k] == 0) {
//                 l++;
//             } else {
//                 k++;
//                 operations++;
//             }
//         }

//         if (l == m) {
//             return operations;
//         }

//         return -1;
//     }
// };

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(), nums.end());
        sort(numsDivide.begin(), numsDivide.end());
        int cnt=0;
        int cmn=numsDivide[0];
        for(int i=1; i<numsDivide.size(); i++){
            cmn=__gcd(cmn, numsDivide[i]);
        }
        //cout<<cmn<<endl;
        if(nums[0]>cmn){return -1;}
        for(int i=0; i<nums.size(); i++){
            if(cmn%nums[i]==0){
                return cnt;
            }
            cnt++;
        }
        return -1;
    }
};
