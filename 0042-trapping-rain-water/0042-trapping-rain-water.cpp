// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int s = height.size();
//         int right[s];
//         int left[s];

//         int max1=0;
//         for(int i=0;i<s;i++){
//             if(max1<height[i]){
//                 max1=height[i];
//                 left[i]=max1;
//             }
//             else{
//                 left[i]=max1;
//             }
//         }
//         right[s-1]=height[s-1];
//         int max2=height[s-1];
//         for(int i=s-2;i>=0;i--){
//             if(max2<height[i]){
//                 max2=height[i];
//                 right[i]=max2;
//             }
//             else{
//                 right[i]=max2;
//             }
//         }
//         int sum=0;
//         for(int i=0;i<s;i++){
//             if(left[i]>right[i]){
//                 int d = left[i]-height[i];
//                 sum+=d;
//             }
//             else{
//                 int d = right[i]-height[i];
//                 sum+=d;
//             }
//         }

//         return sum;
//     }
// };
#include <vector>
#include <algorithm>

class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        vector<int> left(s);
        vector<int> right(s);

        int max1 = 0;
        for (int i = 0; i < s; i++) {
            if (max1 < height[i]) {
                max1 = height[i];
            }
            left[i] = max1;
        }

        right[s - 1] = height[s - 1];
        int max2 = height[s - 1];
        for (int i = s - 2; i >= 0; i--) {
            if (max2 < height[i]) {
                max2 = height[i];
            }
            right[i] = max2;
        }

        int sum = 0;
        for (int i = 0; i < s; i++) {
            int barrierHeight = min(left[i], right[i]);
            int waterHeight = barrierHeight - height[i];
            if (waterHeight > 0) {
                sum += waterHeight;
            }
        }

        return sum;
    }
};
