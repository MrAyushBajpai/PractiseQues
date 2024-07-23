#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    int rev = 0;
    int neg = 1;
    
    if (x <= INT_MIN){
        return 0;
    }

    if (x < 0){
        neg = -1;
        x *= -1;
    }

    while (x != 0){
        if (rev > INT_MAX / 10){
            return 0;
        }
        rev = rev * 10;
        rev += x % 10;
        x /= 10;
    }        
    return neg * rev;
}

int main(){
    int a;
    cin >> a;

    cout << reverse(a);

}