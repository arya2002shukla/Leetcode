class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(!map[nums[i]]){
                map[nums[i]]++;
            }
            else{
                return true;
            }
        }

        return false;
    }
};