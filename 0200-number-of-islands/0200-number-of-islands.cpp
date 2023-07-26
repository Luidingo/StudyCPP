#define MAX_SIZE 301

class Solution {
    int Checked[MAX_SIZE][MAX_SIZE] = { 0, };
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
public:
    void bfs(int a, int b, int m, int n, vector<vector<char>>& grid)
    {
        queue<pair<int,int>> q;
        q.push(make_pair(b, a));
        Checked[a][b]++;
        
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && !Checked[ny][nx] && grid[ny][nx] == '1')
                {
                    Checked[ny][nx]++;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int Answer = 0;
        memset(Checked, 0, sizeof(Checked));

        int Height = grid.size();
        int Width = grid[0].size();

        for(int i = 0; i < Height; i++)
        {
            for(int j = 0; j < Width; j++)
            {
                if(grid[i][j] == '1' && !Checked[i][j])
                {
                    Answer++;
                    bfs(i, j, Height, Width, grid);
                }
            }
        }

        return Answer;
    }
};