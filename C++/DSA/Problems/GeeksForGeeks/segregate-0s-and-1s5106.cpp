// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int> &arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start < end){
        if(arr[start] == 0){
            start++;
        }
        else if(arr[end] == 1){
            end--;
        }
        else{
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main(){
    vector<int> arr = {0,1,1,0,1,0,1,0,0};
    segregate0and1(arr);

    cout << "{";
    for(auto it: arr){
        cout << it << ", "; 
    }
    cout << "}";
}