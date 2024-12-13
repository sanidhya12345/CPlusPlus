#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <unordered_map>

using namespace std;

// Function to check connection time between two points
int checkConnectionTime(int x1, int y1, int x2, int y2) {
    if (y1 == y2) {
        return (abs(x1 - x2) + 1) / 2;
    } else if (x1 == x2) {
        return (abs(y1 - y2) + 1) / 2;
    }
    return max(abs(x1 - x2), abs(y1 - y2));
}

// Function to check if all wells are connected at time `mid`
bool isConnectedAtTime(const vector<pair<int, int>>& points, int mid) {
    int n = points.size();
    vector<vector<int>> graph(n);
    
    // Build graph for wells that can connect within time mid
    for (int i = 0; i < n; ++i) {
        int x1 = points[i].first;
        int y1 = points[i].second;
        for (int j = i + 1; j < n; ++j) {
            int x2 = points[j].first;
            int y2 = points[j].second;
            if (checkConnectionTime(x1, y1, x2, y2) <= mid) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    // Check if graph is fully connected using BFS
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    for (bool v : visited) {
        if (!v) return false;
    }
    return true;
}

// Function to find the minimum time for all wells to connect
int solve(const vector<pair<int, int>>& points) {
    int low = 0, high = 1e9, answer = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isConnectedAtTime(points, mid)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        cout << solve(points) << endl;
    }
    return 0;
}
