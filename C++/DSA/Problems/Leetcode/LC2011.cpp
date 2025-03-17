#include <iostream>
#include <vector>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int val = 0;
    for (auto it: operations){
        if (it == "++X" || it == "X++"){
            val++;
        }
        else{
            val--;
        }
    }
    return val;
}

int main(){
    vector<string> operations = {"X++", "++X", "--X", "X--"};
    cout << "Final Value: " << finalValueAfterOperations(operations) << endl;
    return 0;
}