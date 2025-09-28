#include <iostream>
#include <vector>
using namespace std;

int numberOfMatches(int n) {
    int count = 0;
    while(n > 1){
        if(n % 2 == 0){
            count += n / 2;
            n /= 2;
        }
        else{
            count += (n - 1) / 2;
            n = ((n - 1) / 2) + 1;
        }
    }
    return count;
}

int main() {
    vector<int> teams = {7, 8, 15, 16};

    for(int n : teams){
        cout << "Number of teams: " << n 
             << " -> Total matches: " << numberOfMatches(n) << endl;
    }

    return 0;
}