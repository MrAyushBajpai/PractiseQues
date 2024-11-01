#include <iostream>
#include <string>

using namespace std;

string reverseOnlyLetters(string s) {
    int start = 0, end = s.length();

    while (start < end){
        if(isalpha(s[start]) && isalpha(s[end])){
            swap(s[start], s[end]);
            start++;
            end--;
        }
        else if(!isalpha(s[start])){
            start++;
        }
        else{
            end--;
        }
    }
    return s;
}

int main(){
    string str = "ab-cd";
    cout << reverseOnlyLetters(str); 
}