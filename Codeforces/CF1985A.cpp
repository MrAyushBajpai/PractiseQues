#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t){
        string first, second;
        cin >> first >> second;
        char tmp = first[0];
        first[0] = second[0];
        second[0] = tmp;
        cout << first << " " << second << endl;
        t--;
    }
}