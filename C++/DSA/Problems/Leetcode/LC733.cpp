#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &image, int i, int j, int &color, int &compare){
    if (i < 0 || j < 0 || j >= image[0].size() || i >= image.size() ||
        image[i][j] != compare)
        return;

    image[i][j] = color;

    dfs(image, i - 1, j, color, compare);
    dfs(image, i + 1, j, color, compare);
    dfs(image, i, j + 1, color, compare);
    dfs(image, i, j - 1, color, compare);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color){
    int compare = image[sr][sc];
    if (color == compare)
        return image;
    dfs(image, sr, sc, color, compare);
    return image;
}

int main(){
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int sr = 1, sc = 1;
    int newColor = 2;

    vector<vector<int>> result = floodFill(image, sr, sc, newColor);

    cout << "Resulting image after flood fill:\n";
    for (const auto &row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }

    return 0;
}
