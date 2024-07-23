#include <iostream>
using namespace std;

int main(){
    int rows = 3, cols = 6;
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "* ";
        }
        cout << endl;
    }
}