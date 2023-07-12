#include <iostream>

using namespace std;

int main() 
{
    int a = 0, b = 1, tmp = 0;
    int n;
    cin >> n;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else
    {
        for (int i = 1; i < n; i++)
        {
            tmp = a + b;
            a = b;
            b = tmp;
        }
        cout << tmp;
    }
}