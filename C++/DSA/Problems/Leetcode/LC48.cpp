#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int startRow = 0;
    int endRow = matrix.size() - 1;

    while (startRow < endRow){
        vector<int> temp = matrix[startRow];
        matrix[startRow] = matrix[endRow];
        matrix[endRow] = temp;
        startRow++;
        endRow--;
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = i + 1; j < matrix.size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(vector<vector<int>>& matrix){
    for(auto i: matrix){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> testMatrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(testMatrix);
    printMatrix(testMatrix);
}