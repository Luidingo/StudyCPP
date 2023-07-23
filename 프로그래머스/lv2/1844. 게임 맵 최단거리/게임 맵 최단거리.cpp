#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX_SIZE = 100;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int solution(vector<vector<int>> maps)
{
    int ARR_SIZEX = maps[0].size();
    int ARR_SIZEY = maps.size();
    int counter[MAX_SIZE][MAX_SIZE] = { 0, };
    memset(counter, -1, sizeof(counter));

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    counter[0][0] = 0;
    
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first;
        int y = p.second;

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            if (nextX >= 0 && nextX < ARR_SIZEX && nextY >= 0 && nextY < ARR_SIZEY && 
                counter[nextY][nextX] == -1 && maps[nextY][nextX])
            {
                counter[nextY][nextX] = counter[y][x] + 1;

                if (nextY == ARR_SIZEY - 1 && nextX == ARR_SIZEX - 1)
                    return counter[nextY][nextX] + 1;

                q.push(make_pair(nextX, nextY));
            }
        }
    }
    
    if(!counter[ARR_SIZEY - 1][ARR_SIZEX - 1] == -1)
        return -1;
    else
        return counter[ARR_SIZEY - 1][ARR_SIZEX - 1];
}