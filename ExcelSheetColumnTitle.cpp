//Leetcode c++
//Excel Sheet Column Title

//Given a positive integer, return its corresponding column title as appear in an Excel sheet.
/*
For example:

1 -> A
2 -> B
3 -> C
...
26 -> Z
27 -> AA
28 -> AB
*/

class Solution {
public:
    string convertToTitle(int n) {
        if(n < 1)return NULL;
        string str;
        while (n > 0) {
            char c = 'A'+(n-1)%26;
            str.insert(str.begin(), c);
            n = n-1;
            n = n/26;
        }
        return str;
    }
};