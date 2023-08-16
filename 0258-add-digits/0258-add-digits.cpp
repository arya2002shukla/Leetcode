class Solution {
public:
    int addDigits(int num) {
        int t=0;
        int sum=0;
        while(num){
            t=num%10;
            sum += t;
            num = num/10;
            if(num==0 && sum>9){
                num = sum;
                sum=0;
            }
        }

        return sum;
    }
};