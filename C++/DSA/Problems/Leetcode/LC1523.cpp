#include <iostream>
#include <vector>
using namespace std;

int countOdds(int low, int high) {
    return ((high + 1) / 2) - (low / 2);
}

int main(){
    cout << countOdds(3, 7);
}