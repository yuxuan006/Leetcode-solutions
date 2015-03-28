//Leetcode c++
//Valid Parentheses
/*
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 
 The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/
 
class Solution {
public:
    bool isValid(string s) {
        string str;
        
        while(s.size() > 0){
            
            char l = s.back();
            if(l == '}' || l == ']' || l == ')'){
                s.pop_back();
                str.push_back(l);
            }
            else if(l == '(' || l == '{' || l == '['){
                if(s.size() <= 0)return false;
                char r = str.back();
                if( (l == '(' && r == ')')|| (l == '{' && r == '}')||  (l == '[' && r == ']')){
                    s.pop_back();
                    str.pop_back();
                }
                else{
                    return false;
                }
            }
            else{
                s.pop_back();
            }
        }
        if(s.size() == 0 && str.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
    
};