#include <iostream>
#include <vector>
using namespace std;

void printGfg(int N) {
    if(N == 0) return;
    cout << "GFG" << " ";
    printGfg(N - 1);        
}

int main(){
    int N = 10;
    printGfg(N);
}
