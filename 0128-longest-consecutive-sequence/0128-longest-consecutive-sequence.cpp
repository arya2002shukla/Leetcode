class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        set<int>set;
        vector<int>output;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
        for(auto i:set){
            output.push_back(i);
        }
        int c=0,max=0;
        bool flag =false;
        for(int i=0;i<output.size()-1;i++){
            if(output[i]<output[i+1] && output[i+1]-output[i]==1){
                c++;
                flag=true;
            }
            else{
                if(flag){
                    if(max<c){
                        max=c;
                    }
                    c=0;
                    flag=false;
                }
            }
        }
        if(flag){
            if(max<c){
                max=c;
            }
        }
        return max+1;
    }
};