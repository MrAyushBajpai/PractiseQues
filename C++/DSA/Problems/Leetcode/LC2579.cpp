#include <iostream>
using namespace std;

long long coloredCells(int n) {
    __int128 res = (__int128)(n - 1) * (n - 1);
    res += (__int128)n * n;
    return (long long)res;
}

int main(){
    cout << coloredCells(5);
}