#include <iostream>
using namespace std;

int balancedStringSplit(string s) {
    int balance = 0, count = 0;
    for(auto it: s){
        if (it == 'L'){
            balance++;
        }
        else{
            balance--;
        }

        if(balance == 0){
            count++;
        }
    }
    return count;
}

int main(){
    cout << balancedStringSplit("RLRRLLRLRL");
}