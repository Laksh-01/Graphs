// There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

// A province is a group of directly or indirectly connected cities and no other cities outside of the group.

// You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

// Return the total number of provinces.
// isConnected = [[1,0,0],[0,1,0],[0,0,1]]
//graph
// 1 0 0
// 0 1 0
// 0 0 1

//Perform dfs and make sure everything is visited

//the number of times dfs works is your answer

// class Solution {
// public:
//     void dfs(unordered_map<int,list<int>> &adj, vector<int>& visited, int start, int n) {
//         visited[start] = 1;
//         for (auto it : adj[start]) {
//             if (!visited[it]) {
//                 visited[it] = 1;
//                 dfs(adj, visited, it, n);
//             }
//         }
//     }

//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         unordered_map<int,list<int>>adj;
//         for (int u = 0; u < n; ++u) {
//             for (int v = 0; v < n; ++v) {
//                 if (isConnected[u][v] == 1) {
//                     adj[u].push_back(v);
//                     adj[v].push_back(u);
//                 }
//             }
//         }
//         int ans = 0;
//         vector<int> visited(n, 0);
//         for (int i = 0; i < n; ++i) {
//             if (!visited[i]) {
//                 dfs(adj, visited, i, n);
//                 ans++;
//             }
//         }
//         return ans;
//     }
// };

