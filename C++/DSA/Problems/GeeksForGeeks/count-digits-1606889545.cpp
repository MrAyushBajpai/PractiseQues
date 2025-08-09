#include <iostream>
#include <vector>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    int n = 12312;
    cout << countDigits(n);
}