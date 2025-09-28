#include <iostream>
#include <vector>
using namespace std;

int maxRepeating(string sequence, string word) {
    int maxCount = 0;
    string repeated = word;
    while (sequence.find(repeated) != string::npos) {
        maxCount++;
        repeated += word;
    }
    return maxCount;
}


int main(){
    string sequence = "ababc";
    string word = "ab";

    cout << maxRepeating(sequence, word) << endl;
}