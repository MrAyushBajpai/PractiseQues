#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(vector<vector<int>> &adj) {
    vector<bool> visited(adj.size(), false);
    vector<int> res;
    queue<int> q;
    
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int front = q.front();
        q.pop();
        res.push_back(front);

        for (auto neighbour : adj[front]) {
            if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }

    return res;
}


int main() {
    int n = 7;
    vector<vector<int>> adj(n);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5, 6};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};
    adj[6] = {2};

    vector<int> bfsResult = bfsOfGraph(adj);

    cout << "BFS Traversal: ";
    for(int node : bfsResult){
        cout << node << " ";
    }
    cout << endl;

    return 0;
}