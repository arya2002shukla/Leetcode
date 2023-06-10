class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        for(int i=s-2;i>=0;i--){
           if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            
        }
        int k = nums.size();
        return k;

    }
};