#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    int minutes = 0;

    int fresh = 0;
    queue<pair<int, int>> rotten;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1) fresh++;
            else if(grid[i][j] == 2) rotten.push({i, j});
        }
    }

    if (fresh == 0) return 0;

    while(!rotten.empty()){
        int size = rotten.size();
        bool rotThisRound = false;
        
        while(size--){
            auto [x,y] = rotten.front();
            rotten.pop();

            if(x > 0 && grid[x-1][y] == 1){
                grid[x-1][y] = 2;
                rotten.push({x - 1,y});
                rotThisRound = true;
                fresh--;
            }

            if(y > 0 && grid[x][y-1] == 1){
                grid[x][y-1] = 2;
                rotten.push({x, y-1});
                rotThisRound = true;
                fresh--;
            }

            if(x < m - 1 && grid[x + 1][y] == 1){
                grid[x+1][y] = 2;
                rotten.push({x+1, y});
                rotThisRound = true;
                fresh--;
            }

            if(y < n -1 && grid[x][y+1] == 1){
                grid[x][y+1] = 2;
                rotten.push({x, y+1});
                rotThisRound = true;
                fresh--;
            }
        }

        if(rotThisRound) minutes++;
    }
    return fresh == 0 ? minutes:-1;
}


int main() {
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };

    int result = orangesRotting(grid);
    cout << "Minutes to rot all oranges: " << result << endl;

    return 0;
}