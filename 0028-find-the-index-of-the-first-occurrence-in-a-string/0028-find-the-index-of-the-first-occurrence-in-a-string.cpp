// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int l =haystack.length();
//         int y = needle.length();
//         int c=0,p;
//         int j=0;
//         for(int i=0;i<l;i++){
//             if(haystack[i]==needle[j] && j<y){
//                 c++;
//                 j++;
//                 p=i;
//             }
//             else if(c==y){
//                 break;
//             }
//             else{
//                 c=0;
//                 j=0;
//             }
//         }

//         if(c==y){
//             p=p-y+1;
//         }
//         else{
//             return -1;
//         }

//         return p;
//     }
// };

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = haystack.length();
        int y = needle.length();
        if (y == 0) {
            return 0;
        }
        
        for (int i = 0; i <= l - y; i++) {
            int j;
            for (j = 0; j < y; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            
            if (j == y) {
                return i;
            }
        }
        
        return -1;
    }
};
