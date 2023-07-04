class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        vector<int>output;
        for(auto i:map){
            if(i.second>n/3){
                output.push_back(i.first);
            }
        }

        return output;
    }
};