class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int s = nums.size();
       int sum=INT_MIN;
       int curr=0;
       int temp = *max_element(nums.begin(),nums.end());
        if(temp<0){
            return temp;
        }
    
       for(int i=0;i<s;i++){
           curr+=nums[i];
           if(curr<0){
               curr = 0;
           }
           sum = max(sum,curr);
           
        }
       
        return sum;
    }
};