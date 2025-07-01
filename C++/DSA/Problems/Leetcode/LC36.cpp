#include <iostream>
#include <vector>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    // Check each row
    for(int i = 0; i < 9; i++){
        vector<int> freq(9, 0);
        for(int j = 0; j < 9; j++){
            char c = board[i][j];

            if(c == '.' || c < '0' || c > '9'){
                continue;
            }
            else if(freq[board[i][j] - '1'] > 0){
                return false;
            }
            else{
                freq[board[i][j] - '1']++; 
            }
        }
    }

    // Check each column
    for(int i = 0; i < 9; i++){
        vector<int> freq(9, 0);
        for(int j = 0; j < 9; j++){
            char c = board[j][i];

            if(c == '.' || c < '0' || c > '9'){
                continue;
            }
            else if(freq[board[j][i] - '1'] > 0){
                return false;
            }
            else{
                freq[board[j][i] - '1']++; 
            }
        }
    }

    // Check each box
    for(int boxRow = 0; boxRow < 9; boxRow += 3){
        for(int boxCol = 0; boxCol < 9; boxCol += 3){
            vector<int> freq(9, 0);    

            for(int i = boxRow; i <= boxRow + 2; i++){
                for(int j = boxCol; j <= boxCol + 2; j++){
                    char c = board[i][j];

                    if(c == '.' || c < '0' || c > '9'){
                        continue;
                    }
                    else if(freq[board[i][j] - '1'] > 0){
                        return false;
                    }
                    else{
                        freq[board[i][j] - '1']++; 
                    }
                }
            }

        }
    }
    return true;
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (isValidSudoku(board)) {
        cout << "The Sudoku board is valid." << endl;
    } else {
        cout << "The Sudoku board is invalid." << endl;
    }

    return 0;
}
