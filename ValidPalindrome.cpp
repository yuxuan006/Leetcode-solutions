//Leetcode c++
//Valid Palindrome
/*
 Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
 
 For example,
 "A man, a plan, a canal: Panama" is a palindrome.
 "race a car" is not a palindrome.
*/
 
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        if(s.size() < 1)return true;
        while(start<end){
            if(!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
        
    }
    
};