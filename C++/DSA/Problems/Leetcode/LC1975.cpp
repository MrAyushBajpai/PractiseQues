#include <iostream>
#include <vector>
using namespace std;

long long maxMatrixSum(vector<vector<int>>& matrix) {
    int neg_count = 0;
    int minVal = INT_MAX;
    long long sum = 0;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            if(matrix[i][j] < 0){
                neg_count++;
            }
            minVal = min(minVal, abs(matrix[i][j]));
            sum += abs(matrix[i][j]);
        }
    }        

    if(neg_count % 2 != 0){
        sum -= 2 * minVal;
    }

    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, -1},
        {-1, 1}
    };

    cout << maxMatrixSum(matrix) << endl;
    return 0;
}