class Solution {
public:
    int trap(vector<int>& height) {
        int s = height.size();
        int right[s];
        int left[s];

        int max1=0;
        for(int i=0;i<s;i++){
            if(max1<height[i]){
                max1=height[i];
                left[i]=max1;
            }
            else{
                left[i]=max1;
            }
        }
        right[s-1]=height[s-1];
        int max2=height[s-1];
        for(int i=s-2;i>=0;i--){
            if(max2<height[i]){
                max2=height[i];
                right[i]=max2;
            }
            else{
                right[i]=max2;
            }
        }
        int sum=0;
        for(int i=0;i<s;i++){
           int minheight = min(left[i],right[i]);
           sum+=minheight-height[i];
        }
        
        return sum;
    }
};
