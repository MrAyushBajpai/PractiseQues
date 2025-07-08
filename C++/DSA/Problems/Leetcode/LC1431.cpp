#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maximum = 0;
    for(int i = 0; i < candies.size(); i++){
        if (candies[i] > candies[maximum]){
            maximum = i;
        }
    }        

    vector<bool> result;
    for(int i = 0; i < candies.size(); i++){
        if(candies[i] + extraCandies >= candies[maximum] || i == maximum){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }

    return result;
}

int main() {
    vector<vector<int>> testCases = {
        {2, 3, 5, 1, 3},
        {4, 2, 1, 1, 2},
        {12, 1, 12}
    };
    vector<int> extras = {3, 1, 10};

    for (int i = 0; i < testCases.size(); ++i) {
        cout << "Test case " << i + 1 << ": ";
        vector<bool> res = kidsWithCandies(testCases[i], extras[i]);
        for (bool b : res) {
            cout << (b ? "true" : "false") << " ";
        }
        cout << endl;
    }

    return 0;
}