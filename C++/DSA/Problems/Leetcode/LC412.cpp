#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> result;
    result.reserve(n);

    for(int i = 1; i <= n; i++){
        string s;
        if (i % 3 == 0) s += "Fizz";
        if (i % 5 == 0) s += "Buzz";
        if (s.empty()) s = to_string(i);
        result.push_back(s);
    }
    return result;
}

int main(){
    int n = 15;
    vector<string> output = fizzBuzz(n);

    for(const string &s : output){
        cout << s << endl;
    }

    return 0;
}