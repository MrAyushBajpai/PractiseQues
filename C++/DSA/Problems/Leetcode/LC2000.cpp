#include <iostream>
#include <vector>
using namespace std;

string reversePrefix(string word, char ch) {
    int start = 0, end = 0;
    while(end < word.size() && word[end] != ch){
        end++;
    }

    if(end >= word.size()) return word;

    while(start < end){
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
    return word;
}

int main(){
    string word = "abcdefd";
    char ch = 'd';

    cout << reversePrefix(word, ch);
}   