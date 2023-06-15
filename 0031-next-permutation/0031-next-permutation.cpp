class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s = nums.size();
        next_permutation(nums.begin(),nums.end());
    }
};