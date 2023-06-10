class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m1;
        map<int,int>m2;

        for(auto i:nums){
            m1[i]++;
        }

        for(auto i:m1){
            m2[i.second]=i.first;
        }
        int maxi=0;
        for(auto i:m2){
            maxi = max(maxi,i.first);
        }
        return m2[maxi];
    }
};