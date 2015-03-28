//Leetcode c++
//String to Integer (atoi)
/*
 The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.
 
 The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.
 
 If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.
 
 If no valid conversion could be performed, a zero value is returned. If the correct value is out of the range of representable values, INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.
*/
 
class Solution {
public:
    int atoi(string str) {
        int len = str.size();
        if(len < 1)return 0;
        int i = 0;
        int k;
        int res = 0;
        bool neg = false;
        while(isspace(str[i])){
            i++;
        }
        if(str[i] == '-' ||str[i] == '+'){
            neg = (str[i]=='-') ;
            i++;
        }
        k = i;
        while(isdigit(str[i])){
            int digit = (str[i] - '0');
            if(neg){
                if( -res < (INT_MIN + digit)/10 ) {
                    return INT_MIN;
                }
            }
            else{
                if( res > (INT_MAX - digit) /10 ) {
                    return INT_MAX;
                }
            }
            i++;
            res = 10*res + digit ;
        }
        return neg?-res:res;
    }
    
};