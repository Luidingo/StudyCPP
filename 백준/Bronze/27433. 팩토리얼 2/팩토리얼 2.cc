#include <iostream>

using namespace std;

long long factorial(int num)
{
    if (num == 1)
        return num;
    else
        return num * factorial(num - 1);
}

int main() 
{
    int n;
    cin >> n;
    if (n != 0)
        cout << factorial(n);
    else
        cout << 1;
}