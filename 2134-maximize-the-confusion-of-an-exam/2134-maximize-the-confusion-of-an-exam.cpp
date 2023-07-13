class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int j=0,i=0,cn=0,maxx=0;
        while(j<n){
            if(s[j]=='F'){
                cn++;
            }
            while(cn>k){
                if(s[i]=='F'){
                    cn--;
                }
                i++;
            }
            maxx = max(maxx,j-i+1);
            j++;
        }
        i=0;
        j=0;
        cn=0;
        while(j<n){
            if(s[j]=='T'){
                cn++;
            }
            while(cn>k){
                if(s[i]=='T'){
                    cn--;
                }
                i++;
            }
            maxx = max(maxx,j-i+1);
            j++;
        }

        return maxx;
    }
};