#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> num;
    for (auto& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int valA = num.top(); num.pop();
            int valB = num.top(); num.pop();
            
            if (token == "+") num.push(valB + valA);
            else if (token == "-") num.push(valB - valA);
            else if (token == "*") num.push(valB * valA);
            else num.push(valB / valA);
        } 
        else {
            num.push(stoi(token));
        }
    }
    return num.top();
}

int main() {
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    
    int result = evalRPN(tokens);
    cout << "Result: " << result << endl;

    return 0;
}