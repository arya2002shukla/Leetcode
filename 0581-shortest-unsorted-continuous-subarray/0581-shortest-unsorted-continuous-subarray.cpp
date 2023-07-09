class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>vec = nums;
        sort(nums.begin(),nums.end());
        int minn = INT_MAX;
        int maxx = INT_MIN;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=vec[i]){
                minn = min(minn,i);
                maxx = max(maxx,i);
                flag=true;
            }       
        }
        if(!flag){
            return 0;
        }
        
        return maxx-minn+1;
    }
};