#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
    vector<vector<int>> res;
    vector<int> visited(V, 0);

    vector<vector<int>> adj(V);
    for (auto &e : edges) {
        int u = e[0];
        int v = e[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i < V; i++){
        if(visited[i]) continue;
        
        vector<int> temp;
        queue<int> q;
        q.push(i);
        visited[i] = 1;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            temp.push_back(front);

            for(auto it: adj[front]){
                if(!visited[it]){
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        res.push_back(temp);
    }
    return res;
}

int main() {
    int V = 7;
    vector<vector<int>> edges = {{0,1}, {1,2}, {3,4}, {5,6}};

    vector<vector<int>> components = getComponents(V, edges);

    for(auto &comp : components){
        cout << "{ ";
        for(int v : comp) cout << v << " ";
        cout << "}\n";
    }
    return 0;
}
