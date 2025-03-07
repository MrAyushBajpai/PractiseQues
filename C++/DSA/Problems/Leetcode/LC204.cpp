#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int countPrimes(int n) {
    vector<int> prime(n, 1);
    for(int i = 2; i < sqrt(n); i++){
        if(prime[i] == 1){
            for(int j =  2 * i; j < n; j += i){
                prime[j] = 0;
            }
        }
    }

    int count = 0;
    for(int i = 2; i < prime.size(); i++){
        if(prime[i] == 1){
            cout << i << endl;
            count++;
        }
    }
    return count;
}

int main(){
    cout << countPrimes(5);
}