// https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

#include <iostream>
#include <vector>
using namespace std;

void segregateElementsLinearTwoPass(vector<int>& arr) {
            // Time Complexity - O(n+n) -> O(n)
            // Space Complexity - O(n)
            vector<int> res;
            for (auto it: arr){
                if (it >= 0){
                    res.push_back(it);
                }
            }

            for (auto it: arr){
                if (it < 0){
                    res.push_back(it);
                }
            }

            arr = res;
    }

void segregateElementsLinearOnePass(vector<int>& arr) {
            // Time Complexity - O(n)
            // Space Complexity - O(n)
            vector<int> negRes;
            vector<int> posRes;
            for (auto it: arr){
                if (it >= 0){
                    posRes.push_back(it);
                }
                else{
                    negRes.push_back(it);
                }
            }

            arr.clear();
            arr.insert(arr.end(), posRes.begin(), posRes.end());
            arr.insert(arr.end(), negRes.begin(), negRes.end());
    }

int main(){
    vector<int> arr = {-5, 7, -3, -4, 9, 10, -1, 11};
    segregateElementsLinearOnePass(arr);

    for (auto it: arr){
        cout << it << " ";
    }
}