class Solution {
public:
    string minWindow(string s, string t) {
        int windowStart = 0, minLen=s.size()+1,matched=0, subStrStart = 0;
        unordered_map<char,int> charFreq;
        for(char ch:t){
            charFreq[ch]++;
        }
        for(int windowEnd = 0; windowEnd<s.size(); windowEnd++){
            char rightChar = s[windowEnd];
            if(charFreq.find(rightChar) != charFreq.end()){
                charFreq[rightChar]--;
                if(charFreq[rightChar] >=0){
                    matched++;
                }
            }

            while(t.size() == matched){
                if(minLen > windowEnd - windowStart + 1){
                    minLen = windowEnd - windowStart +1;
                    subStrStart = windowStart;
                }

                char leftChar = s[windowStart++];
                if(charFreq.find(leftChar) != charFreq.end()){
                    if(charFreq[leftChar] == 0){
                        matched--;
                    }
                    charFreq[leftChar]++;
                }
            }
        }
        return minLen > s.size() ? "" : s.substr(subStrStart,minLen);
    }
};