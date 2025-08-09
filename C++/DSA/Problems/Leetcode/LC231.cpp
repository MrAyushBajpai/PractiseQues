#include <iostream>
#include <vector>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main(){
    int n = 16777217;
    cout << isPowerOfTwo(n);
}