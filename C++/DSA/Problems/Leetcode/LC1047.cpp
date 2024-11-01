#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

string removeDuplicatesBruteForce(string s) {
    int ptr = 0;
    while(ptr != s.length() - 1 && s.length() != 0){
        if (s[ptr] == s[ptr + 1]){
            s.erase(ptr, 2);
            ptr = -1;
        }
        ptr++;
    }
    return s;
}

string removeDuplicatesStack(string s){
    stack<char> res;
    string result;
    for(auto it: s){
        if (!res.empty() && res.top() == it){
            res.pop();
        }
        else{
            res.push(it);
        }
    }
    while (!res.empty()){
        result.push_back(res.top());
        res.pop();
    }

    reverse(result.begin(), result.end());
    return result;
}

string removeDuplicatesString(string s){
    string result;
    for(auto it: s){
        if (!result.empty() && result.back() == it){
            result.pop_back();
        }
        else{
            result += it;
        }
    }
    return result;
}

int main(){
    string str = "abbaca";
    cout << "Final String: " << removeDuplicatesString(str) << endl;
}