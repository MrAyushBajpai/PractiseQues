#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int maximum69Number (int num) {
    int original = num;
    int place = 0, firstSix = -1;

    while(num > 0){
        if(num % 10 == 6){
            firstSix = place;
        }
        place++;
        num /= 10;
    }

    if(firstSix != -1){
        original += 3 * int(pow(10, firstSix));
    }
    
    return original;
}

int main(){
    int num = 9669;
    cout << maximum69Number(num);
}