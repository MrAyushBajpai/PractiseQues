#include <iostream>
#include <vector>
using namespace std;

bool armstrongNumber(int n) {
    static const int cubes[10] = {
        0, 1, 8, 27, 64, 125, 216, 343, 512, 729
    };

    int sum = 0;
    int x = n;
    while(x > 0){
        sum += cubes[x % 10];
        x /= 10;
    }
    return n == sum;
}

int main(){
    int n = 371;
    cout << armstrongNumber(n);
}