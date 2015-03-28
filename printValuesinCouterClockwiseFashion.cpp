//given a N*N matrix, startign from the upper left corner of the matrix start printing values in a counter-clockwise fashion.

#include <iostream>
#include <string>

using namespace std;
int main(){
    char arr[4][4] ={{'c','i','p','e'},{'r','n','k','u'},{'u','o','w','o'},{'l','e','s','y'}};
    int n = sizeof(arr[0])/sizeof(char);
    int top =0, left = 0, bottom = n-1, right = n-1;
    while (true) {
        for (int i = right; i >=left; --i) {
            cout<<arr[top][i];
        }
        top++;
        if (top>bottom || left>right) {
            break;
        }
        for (int i = top; i <=bottom; ++i) {
            cout<<arr[i][left];
        }
        left++;
        if (left>right||top>bottom) {
            break;
        }
        for (int i = left; i<= right; ++i) {
            cout<<arr[bottom][i];
        }
        bottom--;
        if (bottom<top||left>right) {
            break;
        }
        for (int i = bottom; i>=top; --i) {
            cout<<arr[i][right];
        }
        right--;
        if (right<left||bottom<top) {
            break;
        }
    }
    return 0;
}