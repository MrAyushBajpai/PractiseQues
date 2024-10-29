// https://leetcode.com/problems/sqrtx/

#include <iostream>
using namespace std;

int mySqrtBinary(int x) {
    int min = 1, max = x/2;
    while(min <= max){
        long mid = min+(max-min)/2;
        if (mid * mid == x){
            return mid;
        }
        else if (mid * mid < x){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }
    return max;
}

int main(){
    cout << mySqrtBinary(18);
}