#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverseWords(string s) {
    int start = 0;
    int n = s.length();

    for(int end = 0; end <= n; end++){
        if(end == n || s[end] == ' '){
            int left = start, right = end - 1;
            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            start = end + 1;
        }
    }

    return s;
}

int main(){
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s);
}