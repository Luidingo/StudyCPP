#include <iostream>

using namespace std;

long long factorial(long long num)
{
    if (num == 1)
        return num;
    else
        return num * factorial(num - 1);
}

int main() 
{
    long long n;
    cin >> n;
    if (n != 0)
        cout << factorial(n);
    else
        cout << 1;
}