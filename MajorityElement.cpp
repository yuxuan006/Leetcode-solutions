//Majority Element

//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

//You may assume that the array is non-empty and the majority element always exist in the array.

class Solution {
public:
    int majorityElement(vector<int> &num) {
        int m = num[0];
        int count = 0;
        for(int i = 0; i< num.size(); ++i){
            if(count == 0){
                m = num[i];
                count++;
            }
            else{
                if (m == num[i]) {
                    count++;
                }
                else{
                    count--;
                }
                if(count > num.size()/2 +1){
                    return m;
                }
            }
        }
        return m;
    }
    
};