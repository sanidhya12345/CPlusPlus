#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> adj, int start) {
    queue<int> q;
    vector<bool> visited(adj.size(), false);
    q.push(start);
    visited[start] = true;
    vector<int> ans;

    while (!q.empty()) {
        int curr = q.front();
        ans.push_back(curr);
        q.pop();

        for (int u : adj[curr]) {
            if (!visited[u]) {
                q.push(u);
                visited[u] = true;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Correct adjacency list representation
    vector<vector<int>> adj = {
        {1, 2},    // Node 0 is connected to nodes 1 and 2
        {0, 3},    // Node 1 is connected to nodes 0 and 3
        {0},       // Node 2 is connected to node 0
        {1}        // Node 3 is connected to node 1
    };

    // Start BFS from node 0 (0-based indexing)
    vector<int> ans = bfs(adj, 0);

    // Print the BFS traversal
    for (int i : ans) {
        cout << i << " "; // Output is in 0-based indexing
    }

    return 0;
}
