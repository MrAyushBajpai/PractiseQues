#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print_divisors(int n) {
    vector<int> small, large;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            small.push_back(i);
            if(i != n / i){
                large.push_back(n / i);
            }
        }
    }

    for(auto it: small){
        cout << it << " ";
    }

    for(int i = large.size() - 1; i >= 0; i--){
        cout << large[i] << " ";
    }
}

int main(){
    int n = 20;
    print_divisors(20);
}