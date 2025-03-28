#include <iostream>
#include <unordered_set>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewelSet(jewels.begin(), jewels.end());
    int count = 0;
    for (char stone : stones) {
        if (jewelSet.count(stone)) {
            count++;
        }
    }
    return count;
}

int main(){
    string jewels = "aA", stones = "aAAbbbb";
    cout << numJewelsInStones(jewels, stones);
}