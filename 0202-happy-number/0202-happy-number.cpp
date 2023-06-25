class Solution {
public:
    bool isHappy(int n) {
        int s=0;
        map<int,bool>map;
        while(!map[s]){
            int t;
            s=0;
            map[n]=true;
            while(n>0){
                t=n%10;
                s+=t*t;
                n=n/10;
            }
            if(s==1){
                return true;
            }
            else{
                n=s;
            }
        }

        return false;
    }
};