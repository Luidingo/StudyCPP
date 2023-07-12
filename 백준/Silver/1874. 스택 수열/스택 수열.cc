#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() 
{
    int n, tmp = 1;
    cin >> n;

    stack<int> s;
    vector<char> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while (tmp <= num)
        {
            s.push(tmp);
            tmp++;
            v.push_back('+');
        }

        if (s.top() == num)
        {
            s.pop();
            v.push_back('-');
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "\n";
}