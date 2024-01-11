// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

//IMPORTANT POINT  (FINDING THE NEIGHBOURS)

//for(int delrow=-1;delrow<=1;delrow++){
//                 for(int delcol=-1;delcol<=1;delcol++){
//                     int nrow=row+delrow;
//                     int ncol=col+delcol;
//                     if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]=='1' && !visited[nrow][ncol] && abs(delrow)!=abs(delcol)){
//                         visited[nrow][ncol]=1;
//                         q.push({nrow,ncol});
//                     }














// class Solution {
// public:
//     void bfs(vector<vector<char>>grid,vector<vector<int>>&visited,int startrow,int startcol){
//         visited[startrow][startcol]=1;
//         queue<pair<int,int>>q;
//         q.push({startrow,startcol});
//         while(!q.empty()){
//             int row=q.front().first;
//             int col=q.front().second;
//             q.pop();
//             for(int delrow=-1;delrow<=1;delrow++){
//                 for(int delcol=-1;delcol<=1;delcol++){
//                     int nrow=row+delrow;
//                     int ncol=col+delcol;
//                     if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]=='1' && !visited[nrow][ncol] && abs(delrow)!=abs(delcol)){
//                         visited[nrow][ncol]=1;
//                         q.push({nrow,ncol});
//                     }
//                 }
//             }

//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int ans=0;
//         vector<vector<int>>visited(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(!visited[i][j] && grid[i][j]=='1'){
//                     bfs(grid,visited,i,j);
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };