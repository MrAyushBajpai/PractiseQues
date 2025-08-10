#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr) {
    int last = arr.back();
    for(int i = arr.size() - 1; i > 0; i--){
        arr[i] = arr[i-1];
    }        
    arr[0] = last;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rotate(arr);

    for(auto it: arr){
        cout << it << " ";
    }
}