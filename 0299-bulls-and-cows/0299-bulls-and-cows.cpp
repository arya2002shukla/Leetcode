class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int>m;
        int n = secret.length();
        for(int i=0;i<n;i++){
            m[guess[i]]++;
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(m[secret[i]]){
                k++;
                if(m[secret[i]]>=1){
                    m[secret[i]]--;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                c++;
            }
        }

        string v="";
        v = to_string(c)+'A'+to_string(k-c)+'B';
        return v;

    }
};