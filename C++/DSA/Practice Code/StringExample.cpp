#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void stringInput(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << endl << "String entered by cin is: " << str << endl << endl;

    // Ignores max 1000 characters upto the \n in input buffer or stream
    // Using a fixed number is unsafe as more than 1000 characters will lead to buffer overflow. Consider using numeric_limits<streamsize>::max()
    cin.ignore(1000, '\n');

    cout << "Enter another string: ";
    getline(cin, str);
    cout << endl << "String entered by getline is: " << str << endl << endl;
}

void addCharactersToString() {
    string str = "Hello";
    cout << "Original String before push_back: " << str << endl;

    string charsToAdd = " World";

    for (char ch : charsToAdd) {
        str.push_back(ch);
    }

    cout << "Modified String after push_back: " << str << endl;
}

void replacePartOfString() {
    string str = "Hello World";
    cout << "Original String: " << str << endl;

    // Replace "World" with "C++"
    string toReplace = "World";
    string replacement = "C++";

    // size_t is an unsigned int, used when counting something, such as length of string, or index, which can never be negative
    size_t pos = str.find(toReplace);

    // npos gives the max value of size_t, i.e. end of the string
    if (pos != string::npos) {
        str.replace(pos, toReplace.length(), replacement);
    }

    cout << "Modified String after replacement: " << str << endl;
}

void countOccurrences() {
    string str = "Hello World, World of C++";
    string toCount = "World";
    int count = 0;

    size_t pos = str.find(toCount);
    while (pos != string::npos) {
        count++;
        pos = str.find(toCount, pos + toCount.length());
    }

    cout << "The substring '" << toCount << "' occurs " << count << " times." << endl;
}


void removeFirstOccurrence() {
    string str = "Hello World";
    cout << "Original String: " << str << endl;

    // Part to be removed
    string toRemove = "World";

    size_t pos = str.find(toRemove);
    if (pos != string::npos) {
        str.erase(pos, toRemove.length());
    }

    cout << "Modified String after removal: " << str << endl;
}

void removeAllOccurrences() {
    string str = "Hello World, Welcome to the World of C++";
    cout << "Original String: " << str << endl;

    // Part to be removed
    string toRemove = "World";

    size_t pos;
    while ((pos = str.find(toRemove)) != string::npos) {
        str.erase(pos, toRemove.length());
    }

    cout << "Modified String after removing all occurrences: " << str << endl;
}

void toUppercase(){
    string str = "Hello World";
    cout << "Original String: " << str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << endl << "Uppercase String: " << str << endl;
}

void toLowercase(){
    string str = "Hello World";
    cout << "Original String: " << str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << endl << "Lowercase String: " << str << endl;
}


int main(){
    toLowercase();
}