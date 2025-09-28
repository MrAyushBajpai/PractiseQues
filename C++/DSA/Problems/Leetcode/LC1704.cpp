#include <iostream>
#include <vector>
using namespace std;

bool halvesAreAlike(string s) {
    int mid = s.size() / 2;
    int leftVow = 0;
    int rightVow = 0;

    for(int i = 0; i < mid; i++){
        switch (s[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                leftVow++;
        }
    }

    for(int i = mid; i < s.size(); i++){
        switch (s[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                rightVow++;
        }
    }
    return leftVow == rightVow;
}

int main() {
    string test1 = "book";
    string test2 = "textbook";

    cout << boolalpha;
    cout << "Test 1: " << halvesAreAlike(test1) << endl;
    cout << "Test 2: " << halvesAreAlike(test2) << endl;

    return 0;
}