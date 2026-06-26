// https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1

#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0){
        count++;
        n /= 10;
    }
    return count;
}

int main(){

}