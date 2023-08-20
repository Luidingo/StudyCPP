#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;

        int arr[10][10] = { 0 };
        int curX = 0;
        int curY = 0;
        int cnt = 1;

        cout << "#" << i << "\n";
        for (int t = 0; t < N; t++)
        {
            // 우측 이동
            for (int x = curY; x < N; x++)
            {
                if (!arr[curX][x])
                {
                    arr[curX][x] = cnt++;
                    curY = x;
                }
            }

            // 하단 이동
            for (int y = curX; y < N; y++)
            {
                if (!arr[y][curY])
                {
                    arr[y][curY] = cnt++;
                    curX = y;
                }
            }

            // 좌측 이동
            for (int x = curY; x >= 0; --x)
            {
                if (!arr[curX][x])
                {
                    arr[curX][x] = cnt++;
                    curY = x;
                }
            }

            // 상단 이동
            for (int y = curX; y >= 0; --y)
            {
                if (!arr[y][curY])
                {
                    arr[y][curY] = cnt++;
                    curX = y;
                }
            }

        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << arr[i][j] << " ";
                arr[i][j] = 0;
            }
            cout << "\n";
        }
    }
}