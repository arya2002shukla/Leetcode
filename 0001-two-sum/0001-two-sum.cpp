class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> ans;
    //     unordered_map<int,int>mpp;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //      if(mpp.find(target-nums[i])!=mpp.end())
    //      {
    //         ans.push_back(mpp[target-nums[i]]);
    //         ans.push_back(i);
    //         return ans;
    //      }
    //         mpp[nums[i]]=i;
    //     }
    //     return ans;
    // }


    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>ans;
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map.find(target - nums[i])!=map.end()){
                ans.push_back(map[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]]=i;
        }

        return ans;


    }
};