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
        if(strlen(s) == 0) return 0;
        int len = strlen(s)-1;
        int count = 0;
        while(len>= 0){
            if(s[len] != ' '){
            count++;
            len--;
            }
            else{
                len--;
                if(count>0) {
                    return count;
                }
            }
        }
        return  count;
    }
};
