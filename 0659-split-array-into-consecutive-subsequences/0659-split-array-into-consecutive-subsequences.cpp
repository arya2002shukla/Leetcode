class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> fre,need;
        for(auto it : nums){
            fre[it]++;
        }
        int n = nums.size();
        for(auto it : nums){
            if(fre[it] == 0)continue;
            if(need[it] > 0){ // checking existing subsequence
                need[it]--;
                fre[it]--;
                need[it+1]++;
            }else if(fre[it] > 0 && fre[it+1] > 0 && fre[it+2] > 0){ // creating new subsequence
                fre[it]--;
                fre[it+1]--;
                fre[it+2]--;
                
                need[it+3]++; 
            }else{
                return false;
            }
        }
        return true;
    }
};