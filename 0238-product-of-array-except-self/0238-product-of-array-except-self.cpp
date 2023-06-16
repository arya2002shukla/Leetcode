class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pro=1;
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                pro = pro*nums[i];
            }
            else{
                zero++;
            }

        }

        if(zero==n){
            return nums;
        }
    

        vector<int>result;
        int ans;
        for(int i=0;i<n;i++){
            if(zero==0){
                if(nums[i]!=0){
                    ans = pro/nums[i];
                }
            }
            else if(zero==1){
                if(nums[i]!=0){
                    ans=0;
                }
                else{
                    ans=pro;
                }
            }
            else{
                ans=0;
            }

            result.push_back(ans);
        }

        return result;
    }
};