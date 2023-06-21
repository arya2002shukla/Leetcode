class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int s = nums.size();
        int low,high;
        sort(nums.begin(),nums.end());
        set<vector<int>>set;
        
            for(int i=0;i<s;i++){
                low= i+1;
                high= s-1;
                while(low<high){
                    if(nums[i]+nums[low]+nums[high]>0){
                        high--;
                    }
                    else if(nums[i]+nums[low]+nums[high]<0){
                        low++;
                    }
                    else{
                        set.insert({nums[i],nums[low],nums[high]});
                        low++;
                        high--;
                    }
                }
            }
            vector<vector<int>>v;
            for(auto i:set){
               v.push_back(i);
            }

            return v;
    }

        
};