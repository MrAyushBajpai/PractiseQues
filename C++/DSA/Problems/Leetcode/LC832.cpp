#include <iostream>
#include <vector>
using namespace std;

void flip(vector<int>& row){
    int begin = 0, end = row.size() - 1;
    while(begin <= end){
        if(begin == end){
            row[begin] = !row[begin];
        }
        else{
            row[begin] = !row[begin];
            row[end] = !row[end];
            swap(row[begin], row[end]);
        }
        begin++;
        end--;
    }
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for(auto it: image){
        flip(it);
    }
    return image;
}

int main(){
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = flipAndInvertImage(image);

    cout << "Flipped and inverted image:\n";
    for(const auto& row : result){
        for(int pixel : row){
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}