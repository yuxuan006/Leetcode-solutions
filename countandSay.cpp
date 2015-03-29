//Count and Say
/*
 The count-and-say sequence is the sequence of integers beginning as follows:
 1, 11, 21, 1211, 111221, ...
 
 1 is read off as "one 1" or 11.
 11 is read off as "two 1s" or 21.
 21 is read off as "one 2, then one 1" or 1211.
 Given an integer n, generate the nth sequence.
 
 Note: The sequence of integers will be represented as a string. */
class Solution {
public:
    string countAndSay(int n) {
        if(n < 0)return "";
        string s, temp;
        s.push_back('1');
        if (n ==1) {
            return s;
        }
        
        while (--n) {
            temp.clear();
            int i = 0;
            while (i < s.size()) {
                int count = 1;
                while(s[i+1] == s[i]) {
                    count++;
                    
                    i++;
                }
                
                string c = to_string(count);
                temp.push_back(count+'0');
                temp.push_back(s[i]);
                i++;
            }
            s = temp;
        }
        return temp;
        
    }
    
};