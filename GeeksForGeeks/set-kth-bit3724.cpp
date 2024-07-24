// https://www.geeksforgeeks.org/problems/set-kth-bit3724/1

#include <iostream>
using namespace std;

int main()
{
    int userInputN;
    cin >> userInputN;

    int userInputk;
    cin >> userInputk;

    int mask = 1 << userInputk;
    int result = (userInputN | mask);

    cout << result;


    return 0;
}
