#include <iostream>
using namespace std;

int main(){
    int n, used = 0, level = 0;
    cin >> n;

    for(int i = 1;; i++){
        if(used + (i*(i+1))/2 > n){
            break;
        }
        used += (i*(i+1))/2;
        level = i;
    }
    cout << level;

    return 0;
}   