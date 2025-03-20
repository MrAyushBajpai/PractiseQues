#include <iostream>
#include <vector>
using namespace std;

int smallestEvenMultiple(int n) {
    if(n % 2 == 0) return n;
    return n * 2;       
}

int main(){
    cout << smallestEvenMultiple(5);
}