#include <iostream>
#include <vector>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int ptr1 = 0, ptr2 = 0;
    string res = "";
    while(ptr1 < word1.size() && ptr2 < word2.size()){
        res += word1[ptr1];
        res += word2[ptr2];
        ptr1++;
        ptr2++;
    }

    while(ptr1 < word1.size()){
        res += word1[ptr1];
        ptr1++;
    }

    while(ptr2 < word2.size()){
        res += word2[ptr2];
        ptr2++;
    }

    return res;
}

int main(){
    string word1 = "abc";
    string word2 = "pqr";
    string expected = "apbqcr";
    string result = mergeAlternately(word1, word2);

    if(result == expected){
        cout << "Test passed: " << result << endl;
    } else {
        cout << "Test failed: got '" << result << "', expected '" << expected << "'" << endl;
    }

    return 0;
}
