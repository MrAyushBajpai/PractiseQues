#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int isVowel(char x){
    return ((x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U'));
}

string reverseVowels(string s) {
        int startPtr = 0, endPtr = s.length() - 1;

        while(startPtr < endPtr){
            if(!isVowel(s[startPtr])){
                startPtr++;
            }
            else if(!isVowel(s[endPtr])){
                endPtr--;
            }
            else{
                swap(s[startPtr], s[endPtr]);
                startPtr++;
                endPtr--;
            }
        }     
        return s;   
}

int main(){
    string s = "IceCreAm";
    cout << reverseVowels(s);
}