#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length = s.length();
        int count = 0;
        bool foundWord = false;

        for (int i = length - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
                foundWord = true;
            } else {
                if (foundWord) {
                    break;
                }
            }
        }

        return count;
    }
};
