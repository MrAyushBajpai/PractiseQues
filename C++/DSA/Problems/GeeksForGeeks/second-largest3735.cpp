#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int val: arr){
        if (val > largest){
            second = largest; 
            largest = val;
        }
        else if (val > second && val != largest){
            second = val;
        }
    } 
    return second != INT_MIN ? second : -1;       
}

int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
}