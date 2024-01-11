// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

// Return the modified image after performing the flood fill.




// class Solution {
// public:
//     void solve(vector<vector<int>>&copy,int sr,int sc,int color,int initial,int delrow[],int delcol[],vector<vector<int>>image){
//         copy[sr][sc]=color;
//         for(int del=0;del<4;del++){
//             int delrow2=sr+delrow[del];
//             int delcol2=sc+delcol[del];
//                if (delrow2 >= 0 && delrow2 < copy.size() && delcol2 >= 0 && delcol2 < copy[0].size() && image[delrow2][delcol2]==initial && copy[delrow2][delcol2] != color) {
//                     solve(copy, delrow2, delcol2, color, initial,delrow,delcol,image);
//                 }
//             }
//         }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         vector<vector<int>>copy=image;
//         int inicolor=copy[sr][sc];
//         int delrow[]={-1,0,1,0};
//         int delcol[]={0,1,0,-1};
//         solve(copy,sr,sc,color,inicolor,delrow,delcol,image);
//         return copy;
//     }
// };