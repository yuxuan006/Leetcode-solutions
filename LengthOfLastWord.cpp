//Leetcode c++
//Length of Last Word

//Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

//If the last word does not exist, return 0.

//Note: A word is defined as a character sequence consists of non-space characters only.

//For example,
//Given s = "Hello World",
//return 5.


class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int sz = strlen(s);
        if (sz == 0){
            return 0;
        }
        int res = 0;
        for (int i = sz-1; i >= 0; i--){
            if (s[i]!=' '){
                res++;
            }
            else{
                if (res > 0){
                    return res;
                }
            }
        }
        return res;
        
    }
};