// https://www.geeksforgeeks.org/problems/common-elements1132/1

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> commonElementsBruteForceBasic(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    // EXTERMELY SLOW
    vector<int> res;
    for(auto i: arr1){
        for(auto j: arr2){
            for(auto k: arr3){
                if (i == j && j == k){
                    res.push_back(i);
                }
            }
        }
    }
    return res;
}

vector<int> commonElementsBruteForceRevisied(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    vector<int> res1;
    vector<int> res2;
    for(auto i: arr1){
        for(auto j: arr2){
            if (i == j){
                res1.push_back(i);
            }
        }
    }
    
    for(auto i: res1){
        for(auto j: arr3){
            if (i == j){
                res2.push_back(i);
            }
        }
    }
    return res2;
}

vector<int> commonElementsBruteForceSetOptimized(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    unordered_set<int> set1(arr1.begin(), arr1.end());
    unordered_set<int> set2(arr2.begin(), arr2.end());
    unordered_set<int> set3(arr3.begin(), arr3.end());

    vector<int> result;
    for (auto it: set1){
        if(set2.find(it) != set2.end() && set3.find(it) != set3.end()){
            result.push_back(it);
        }
    }
    return result;
}

vector<int> commonElementsThreePointers(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    int ptr1 = 0, ptr2 = 0, ptr3 = 0;
    vector<int> res;
    
    while(ptr1 < arr1.size() && ptr2 < arr2.size() && ptr3 < arr3.size()){
        if(arr1[ptr1] > arr2[ptr2]){
            ptr2++;
        }
        else if(arr1[ptr1] > arr3[ptr3]){
            ptr3++;
        }
        else if(arr2[ptr2] > arr3[ptr3]){
            ptr3++;
        }
        else if(arr1[ptr1] == arr2[ptr2] && arr2[ptr2] == arr3[ptr3]){
            res.push_back(arr1[ptr1]);
            ptr1++;
            ptr2++;
            ptr3++;
        }
        else{
            ptr1++;
        }
    }
    return res;
}

int main(){
    vector<int> a = {1, 5, 10, 20, 40, 80};
    vector<int> b = {6, 7, 20, 80, 100};
    vector<int> c = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> output = commonElementsThreePointers(a, b, c);
    for(auto it: output){
        cout << it << endl;
    }
}