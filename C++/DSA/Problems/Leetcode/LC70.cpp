#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> distinct;
int climbStairs(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;

    if(distinct.find(n) == distinct.end()){
        distinct[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }

    return distinct[n];
}

int main(){
    cout << climbStairs(5);
}