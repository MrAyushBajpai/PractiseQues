#include <iostream>
#include <vector>
using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    int first = 0;
    int second = 0;
    int target = 0;
    
    for(const char& ch: firstWord){
        first *= 10;
        first += ch - 'a';
    }

    for(const char& ch: secondWord){
        second *= 10;
        second += ch - 'a';
    }

    for(const char& ch: targetWord){
        target *= 10;
        target += ch - 'a';
    }

    return first + second == target;
}

int main(){
    string firstWord = "acb";
    string secondWord = "cba";
    string targetWord = "cdb";

    if(isSumEqual(firstWord, secondWord, targetWord)) {
        cout << "The sum is equal!" << endl;
    } else {
        cout << "The sum is NOT equal!" << endl;
    }

    return 0;
}