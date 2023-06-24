class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        map<char,int>m1;
        for(int i=0;i<ransomNote.length();i++){
            m1[ransomNote[i]]++;
        }   

        for(int i=0;i<ransomNote.length();i++){
            if(m[ransomNote[i]]<m1[ransomNote[i]]){
                return false;
            }
        }
        return true;
    }
};