//evaluate an express "13*4+8-9" from right to left

#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int evaluation(char op, int left, int right){
    cout<<"Evaluate "<<left<<" "<<op<<" "<<right<<endl;
    int result = 0;
    switch (op) {
        case '*':
            result = left*right;
            break;
        case '-':
            result = left-right;
            break;
        case '+':
            result = left+right;
            break;
    }
    return result;
}
int main() {
    string s = "13*4+8-9";
    
    int l , r;
    char op ;
    int len = s.size();
    int i=0,k;
    while (i<len && isdigit(s[i])) {
        i++;
    }
    l = atoi(s.substr(0, i).c_str());
    k = i+1;
    while (k < len) {
        k = i+1;
        op = s[i];
        while (k<len && isdigit(s[k])) {
            k++;
        }
        r = atoi(s.substr(i+1, k-i-1).c_str());
        l = evaluation(op, l, r);
        i = k;
    }
    cout<<"Result = "<<l<<endl;
    return 0;
}