#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() 
{
    string str;
    char tmp;
    int m;
    cin >> str;
    cin >> m;
    list<char> l(str.begin(), str.end());
    auto cursor = l.end();

    while (m > 0)
    {
        cin >> tmp;

        if (tmp == 'L' && cursor != l.begin())
            cursor--;
        else if (tmp == 'D' && cursor != l.end())
            cursor++;
        else if (tmp == 'B' && cursor != l.begin())
            cursor = l.erase(--cursor);
        else if (tmp == 'P')
        {
            cin >> tmp;
            l.insert(cursor, tmp);
        }
        m--;
    }
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it;
}