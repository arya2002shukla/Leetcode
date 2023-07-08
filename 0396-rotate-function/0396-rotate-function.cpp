// class Solution {
// public:
//     int maxRotateFunction(vector<int>& nums) {
//         int n = nums.size();
//         int max=INT_MIN,sum=0;
//         for(int i=0;i<n;i++){
//             vector<int>v = nums;
//             reverse(v.begin(),v.end());
//             reverse(v.begin(),v.begin()+i);
//             reverse(v.begin()+i,v.end());
//             for(int j=0;j<n;j++){
//                 sum+= j * v[j];
//             }
//             if(max<sum){
//                 max=sum;
//             }
//             sum=0;
//         }

//         return max;
//     }
// };
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int rotation = 0;

        // Calculate the initial rotation function value
        for (int i = 0; i < n; i++) {
            sum += i * nums[i];
            rotation += nums[i];
        }

        int maxRotation = sum;

        // Compute rotation function values for all rotations
        for (int k = 1; k < n; k++) {
            sum = sum + rotation - n * nums[n - k];
            maxRotation = max(maxRotation, sum);
        }

        return maxRotation;
    }
};
