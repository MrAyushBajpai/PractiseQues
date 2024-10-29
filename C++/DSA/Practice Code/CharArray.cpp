#include <iostream>
#include <string>
using namespace std;

void charArrayInput(){
    char name[100];

    cout << "Enter your name: ";
    cin >> name;
    cout << endl << "Your Name is: " << name << endl;

    char ch[3];
    cout << "Enter 3 characters: ";
    cin >> ch[0] >> ch[1] >> ch[2];
    cout << endl << "Characters are " << ch[0] << ch[1] << ch[2] << endl;
}

int charArrayLength(char ch[]){
    int length = 0;
    while(ch[length] != '\0'){
        length++;
    }
    return length;
}

void charArrayTraversal(){
    char name[6] = "Hello";
    for(int i = 0; i < 5; i++){
        cout << "At Index " << i << " Value: " << name[i] << endl;
    }
}

void charArrayReverse(){
    char ch[6] = "Hello";
    int start = 0, end = charArrayLength(ch) - 1;

    while (start < end){
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;

        start++;
        end--;
    }
    cout << ch << endl;
}

bool charArrayPalindrome(){
    char ch[8] = "racecar";
    int start = 0, end = charArrayLength(ch) - 1;
    
    while (start < end){
        if (ch[start] != ch[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool charArrayUppercase(){
    char ch[8] = "RaceCar";
    for(int i = 0; i < charArrayLength(ch); i++){
        if (ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] = ch[i] - 'a' + 'A'; 
    }
    cout << "Uppercase: " << ch << endl;
}

bool charArrayLowercase(){
    char ch[8] = "RaceCar";
    for (int i = 0; i < charArrayLength(ch); i++){
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            ch[i] = ch[i] + 'a' - 'A';
    }
    cout << "Lowercase: " << ch << endl;
}

int main(){
    char ch[6] = "Hello";
    cout << "Length is " << charArrayLength(ch) << endl;

    charArrayReverse();
    charArrayTraversal();

    charArrayUppercase();
    charArrayLowercase();

    cout << charArrayPalindrome();

}