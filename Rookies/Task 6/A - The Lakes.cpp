#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int x, int y, vector<vector<int>>& grid,vector<vector<bool>>& visited, int n, int m) 
{
    visited[x][y] = true;
    int volume = grid[x][y];

    for (int d=0; d<4; d++) 
    {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] > 0 && !visited[nx][ny]) 
        {
            volume += dfs(nx, ny, grid, visited, n, m);
        }
    }
    return volume;
}

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        int maxVolume = 0;

        for (int i=0; i<n; i++) 
        {
            for (int j=0; j<m; j++) 
            {
                if (grid[i][j] > 0 && !visited[i][j]) 
                {
                    maxVolume = max(maxVolume, dfs(i, j, grid, visited, n, m));
                }
            }
        }

        cout << maxVolume << endl;
    }

    return 0;
}
