#include <iostream>
using namespace std;

int theMaximumAchievableX(int num, int t) {
    return num + (t*2);
}

int main(){
    cout << theMaximumAchievableX(4, 1);
}