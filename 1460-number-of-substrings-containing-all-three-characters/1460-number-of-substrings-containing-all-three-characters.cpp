class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        map<char,int>m;
        int j=0,count=0,i=0;
        
        while(j<n){
            m[s[j]]++;
            while(m['a']>=1 && m['b']>=1 && m['c']>=1 ){
                count+= (n-j);
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return count;
        
    }
};