#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfsHelper(int node, vector<int>& res, vector<bool>& visited, vector<vector<int>>& adj){
    visited[node] = true;
    res.push_back(node);

    for(auto it: adj[node]){
        if(!visited[it]){
            dfsHelper(it, res, visited, adj);
        }
    }
}

vector<int> dfs(vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    vector<int> res;
    
    dfsHelper(0, res, visited, adj);

    return res;
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    
    vector<int> result = dfs(adj);

    cout << "DFS Traversal: ";
    for(int node : result){
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
