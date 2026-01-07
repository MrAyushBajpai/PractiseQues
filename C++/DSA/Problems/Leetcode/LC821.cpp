#include <iostream>
#include <vector>
using namespace std;

vector<int> shortestToChar(string s, char c) {
    vector<int> dist;
    vector<int> locations;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == c) locations.push_back(i);
    }

    for(int i = 0; i < s.size(); i++){
        int minVal = INT_MAX;
        for(int location: locations){
            minVal = min(minVal, abs(i - location));
        }
        dist.push_back(minVal);
    }

    return dist;
}

void printVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    // Sample Test Case 1
    string s1 = "loveleetcode";
    char c1 = 'e';
    vector<int> result1 = shortestToChar(s1, c1);

    cout << "Input: " << s1 << ", c = '" << c1 << "'" << endl;
    cout << "Output: ";
    printVector(result1);

    cout << endl;

    // Sample Test Case 2
    string s2 = "aaab";
    char c2 = 'b';
    vector<int> result2 = shortestToChar(s2, c2);

    cout << "Input: " << s2 << ", c = '" << c2 << "'" << endl;
    cout << "Output: ";
    printVector(result2);

    return 0;
}