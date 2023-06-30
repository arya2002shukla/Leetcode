class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9 && i!=0){
                digits[i]=0;
            }
            else if(digits[i]!=9){
                digits[i]=digits[i]+1;
                break;
            }
            else{
                digits[0]=1;
                digits.push_back(0);
            }
        }
        return digits;
    }
};