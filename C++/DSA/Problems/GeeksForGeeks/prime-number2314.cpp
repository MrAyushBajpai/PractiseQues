#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    int limit = static_cast<int>(sqrt(n));
    for(int i = 5; i <= limit; i+=6){
        if(n % i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main(){
    int n = 25;
    cout << isPrime(n);
}