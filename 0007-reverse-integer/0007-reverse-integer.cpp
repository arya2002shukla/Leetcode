class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        int t;
        if(x){
            int i=0;
            while(x){
               t=x%10;
               sum=sum*10+t;
               x=x/10;
               i++;
            }
        
        }

        if(sum<pow(-2,31) || sum>pow(2,31)-1){
            return 0;
        }

        return sum;
    }
};