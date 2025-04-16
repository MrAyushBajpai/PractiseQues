#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void Traverse(int node, vector<vector<int>> &isConnected, vector<bool> &visited){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (int neighbor = 0; neighbor < isConnected[front].size(); neighbor++)
        {
            if (isConnected[neighbor][front] == 1 && !visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int findCircleNum(vector<vector<int>> &isConnected){
    int provinces = 0;
    vector<bool> visited(isConnected.size(), false);

    for (int i = 0; i < isConnected.size(); i++)
    {
        if (!visited[i])
        {
            provinces++;
            Traverse(i, isConnected, visited);
        }
    }

    return provinces;
}

int main()
{
    {
        vector<vector<int>> isConnected = {
            {1, 1, 0},
            {1, 1, 0},
            {0, 0, 1}
        };
        int result = findCircleNum(isConnected);
        cout << "Test Case 1 - Expected: 2, Got: " << result << endl;
    }

    {
        vector<vector<int>> isConnected = {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}
        };
        int result = findCircleNum(isConnected);
        cout << "Test Case 2 - Expected: 3, Got: " << result << endl;
    }

    {
        vector<vector<int>> isConnected = {
            {1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}
        };
        int result = findCircleNum(isConnected);
        cout << "Test Case 3 - Expected: 1, Got: " << result << endl;
    }

    {
        vector<vector<int>> isConnected = {
            {1, 1, 0, 0},
            {1, 1, 0, 0},
            {0, 0, 1, 1},
            {0, 0, 1, 1}
        };
        int result = findCircleNum(isConnected);
        cout << "Test Case 4 - Expected: 2, Got: " << result << endl;
    }

    return 0;
}
