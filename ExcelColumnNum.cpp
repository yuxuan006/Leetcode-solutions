//Leetcode c++
//Excel Sheet Column Number

//Given a column title as appear in an Excel sheet, return its corresponding column number.

//For example:

//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28

class Solution {
public:
    int titleToNumber(string s) {
        int len = s.size();
        char c;
        int res = 0; int j = 0;
        c = s[0];
        while(c != '\0' && j < len){
            res = res*26 + c - 'A' + 1;
            c = s[++j];
        }
        return res;
    }
    
};