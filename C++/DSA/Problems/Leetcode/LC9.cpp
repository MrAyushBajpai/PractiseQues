#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int reverseHalf = 0;
    while (x > reverseHalf){
        reverseHalf = (reverseHalf * 10) + (x % 10);
        x /= 10;
    }

    return reverseHalf == x || reverseHalf / 10 == x;
}

int main(){
    int x = 121;
    cout << isPalindrome(x);
}