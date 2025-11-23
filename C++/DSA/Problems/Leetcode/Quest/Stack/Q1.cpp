#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    int ptr = 0;
    vector<string> res;

    for(int i = 1; i <= n; i++){
        res.push_back("Push");
        
        if(target[ptr] != i){
            res.push_back("Pop");
        }
        else{
            ptr++;
        }

        if(ptr == target.size()) break;
    }
    return res;
}

int main(){
    // Sample input
    vector<int> target = {1, 3};
    int n = 3;

    // Call the function
    vector<string> ops = buildArray(target, n);

    // Print results
    for(const string& op : ops){
        cout << op << endl;
    }

    return 0;
}