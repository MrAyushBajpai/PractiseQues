#include <iostream>
#include <limits.h>
#include <string>
using namespace std;

int maxScore(string s) {
    int highest_score = INT_MIN;
    int left_score = 0;
    int right_score = 0;

    for(auto it: s){
        if(it == '1'){
            right_score++;
        }
    }

    for(int i = 0; i < s.size() - 1; i++){
        if (s[i] == '0'){
            left_score++;
        }
        else{
            right_score--;
        }

        if (left_score + right_score > highest_score){
            highest_score = left_score + right_score;
        }
    }
    
    return highest_score;
}

int main(){
    cout << maxScore("011101");
}