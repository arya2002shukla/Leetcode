class Solution {
public:
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     map<int,int>m1;
    //     int n =nums.size();
    //     for(int i=0;i<n;i++){
    //         m1[nums[i]]=i;
    //     }
        
    //     for(int i=0;i<n;i++){
    //         if(m1[nums[i]]!=i){
    //             if(abs(i-m1[nums[i]])<=k){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int, int> m1;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (m1.find(nums[i]) != m1.end()) {
            if (abs(i - m1[nums[i]]) <= k) {
                return true;
            }
        }
        m1[nums[i]] = i;
    }
    return false;
}

};