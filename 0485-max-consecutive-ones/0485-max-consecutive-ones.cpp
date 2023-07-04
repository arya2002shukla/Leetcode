class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c=0,maax=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
            }
            else{
                maax = max(maax,c);
                c=0;
            }
        }
        maax = max(maax,c);


        return maax;
    }
};