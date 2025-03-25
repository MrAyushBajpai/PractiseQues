#include <iostream>
#include <vector>
using namespace std;

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    vector<int> res;
    res.push_back(0);
    res.push_back(1);
    res.push_back(1);

    for (int i = 3; i <= n; i++) {
        res.push_back(res[i - 1] + res[i - 2] + res[i - 3]);
    }
    return res.back();
}

int main(){
    cout << tribonacci(5);
}