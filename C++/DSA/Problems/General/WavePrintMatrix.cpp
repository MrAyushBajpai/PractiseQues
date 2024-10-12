#include <iostream>
#include <vector>
using namespace std;

void WavePrintRowFlag(vector<vector<int>>& arr){
    bool counter = 1;
    for(int i = 0; i < arr.size(); i++){
        if (counter){
            for (int j = 0; j < arr[0].size(); j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int j = arr[0].size() - 1; j >= 0; j--){
                cout << arr[i][j] << " ";
            }
        }
        counter = !counter;
    }
}

void WavePrintColumnFlag(vector<vector<int>>& arr){
    bool counter = 1;
    for(int i = 0; i < arr[0].size(); i++){
        if (counter){
            for(int j = 0; j < arr.size(); j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j = arr.size() - 1; j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
        counter = !counter;
    }
}

void WavePrintRowModulus(vector<vector<int>>& arr){
    for(int i = 0; i < arr.size(); i++){
        if(i % 2 == 0){
            for(int j = 0; j < arr[0].size(); j++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int j = arr[0].size() - 1; j >= 0; j--){
                cout << arr[i][j] << " ";
            }
        }
    }
}

void WavePrintColumnModulus(vector<vector<int>>& arr){
    for(int i = 0; i < arr[0].size(); i++){
        if(i % 2 == 0){
            for(int j = 0; j < arr.size(); j++){
                cout << arr[j][i] << " ";
            }
        }
        else{
            for(int j = arr.size() - 1; j >= 0; j--){
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    WavePrintColumnModulus(mat);
}
