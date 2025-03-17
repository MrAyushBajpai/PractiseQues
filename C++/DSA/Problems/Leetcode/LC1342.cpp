#include <iostream>
using namespace std;

int numberOfSteps(int num) {
     int steps = 0;
     while(num !=  0){
        if(num % 2 == 0){
            num /= 2;
        }
        else{
            num -= 1;
        }
        steps++;
     }   
     return steps;
}

int numberOfStepsRecursive(int num) {
    if(num == 0) return 0;
    if(num % 2 == 0){
        return numberOfStepsRecursive(num / 2) + 1;
    }
    else{
        return numberOfStepsRecursive(num - 1) + 1;
    }
}

int main() {
    int num = 14;
    cout << "Steps (Iterative): " << numberOfSteps(num) << endl;
    cout << "Steps (Recursive): " << numberOfStepsRecursive(num) << endl;
    return 0;
}