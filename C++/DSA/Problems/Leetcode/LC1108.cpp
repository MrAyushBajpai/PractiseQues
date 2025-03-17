#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string defangIPaddr(string address) {
    string ans;
    for(auto it: address){
        if(it == '.'){
            ans += "[.]";
        }
        else{
            ans += it;
        }
    }
    return ans;
}

int main() {
    string ip;
    cout << "Enter an IP address: ";
    cin >> ip;

    string defangedIP = defangIPaddr(ip);
    cout << "Defanged IP address: " << defangedIP << endl;

    return 0;
}