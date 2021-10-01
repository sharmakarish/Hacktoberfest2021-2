#include<bits/stdc++.h>
using namespace std;

void print(int arr[N][N]) 
{
  for(int i=0 ; i<N ; i++)
  {
    for(int j=0 ; j<N ; j++)    cout<<arr[i][j];
    cout<<endl;
  }
}

bool isItSafe(int arr[N][N] , int row , int col)
{
  int i,j;
  for(i=0 ; i<col ; i++)
    if(arr[row][i]) return true;

  for(i=row , j=col ; i>=0 && j>=0 ; i--,j--)
    if(arr[i][j]) return false;

  for(i=row , j=col ; j>=0 && i<N ; i++,j--)  
    if(arr[i][j]) return false;

  return true;
}

void dfs(vector<vector<bool>>& grid, int row) {
  if (row == grid.size()) {
    print(grid);
    return;
  }

  for (int col = 0; col < grid.size(); col++) {
    if (isItSafe(grid, row, col)) {
      cout << "for (row col): " << row << " " << col << endl;
      grid[row][col] = true;
      print(grid);
      dfs(grid, row + 1);
      grid[row][col] = false;
    }
  }
}

int main() 
{
  vector<vector<bool>> grid = 
  {
    { 0,  0,  0,  0},
    { 0,  0,  0,  0},
    { 0,  0,  0,  0},
    { 0,  0,  0,  0}
  };

  dfs(grid, 0);
  // cout << queen;
}