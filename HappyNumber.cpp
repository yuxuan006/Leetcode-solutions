//Leetcode c++
//Happy Number
/*
 Write an algorithm to determine if a number is "happy".
 
 A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
 
 Example: 19 is a happy number
 
 1^2 + 9^2 = 82
 8^2 + 2^2 = 68
 6^2 + 8^2 = 100
 1^2 + 0^2 + 0^2 = 1
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int calculateDigit(int n){
        int sum = 0;
        while(n > 0){
            sum += pow(n % 10, 2);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        int res = calculateDigit(n);
        while(res != 1){
            if(s.find(res) == s.end()){
                s.insert(res);
                res = calculateDigit(res);
            }
            else
                return false;
        }
        return true;
    }
    
};