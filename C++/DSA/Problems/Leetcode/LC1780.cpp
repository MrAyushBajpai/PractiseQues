#include <iostream>
using namespace std;

bool checkPowersOfThree(int n) {
    while(n){
        if (n % 3 == 2) return false;
        n = n / 3;
    }
    return true;
}

int main(){
    int num = 91;
    cout << (checkPowersOfThree(num) ? "True" : "False");
}