#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int to, int by)
{
    if(n == 1)
        printf("%d %d\n", from, to);
    else
    {
        hanoi(n-1,from,by,to);
        printf("%d %d\n",from,to);
        hanoi(n-1,by,to,from);
    }
}

int main() {
    int N;
    cin >> N;
    cout << (int)pow(2,N) - 1 << "\n";
    hanoi(N, 1, 3, 2);
}