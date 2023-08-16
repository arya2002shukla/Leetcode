class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       int l =strs.size();
       string a = strs[0];
       string v = strs[l-1];
        string b="";
      
       
            for(int i=0;i<a.length();i++){
                if(a[i]==v[i]){
                    b+=a[i];
                }
                else{
                    return b;
                }
            }
        
        

       return b;
    }
};