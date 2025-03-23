#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> parentheses;
    for(auto it: s){
        if (it == '(' || it == '{' || it == '['){
            parentheses.push(it);
        }
        else{
            if(parentheses.empty() || (it == ')' && parentheses.top() != '(') || (it == '}' && parentheses.top() != '{') || (it == ']' && parentheses.top() != '[')){
                return false;
            }
            parentheses.pop();
        }
    }
    return parentheses.empty();
}

int main() {
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    string test5 = "{[]}";

    cout << "Test 1: " << (isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << (isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << "Test 5: " << (isValid(test5) ? "Valid" : "Invalid") << endl;

    return 0;
}
