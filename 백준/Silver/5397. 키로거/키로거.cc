#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() 
{
    string str;
    int n;
    cin >> n;
    list<char> l(str.begin(), str.end());
    list<char>::iterator cursor;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        l.clear();
        cursor = l.begin();
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '<' && cursor != l.begin())
                cursor--;
            else if (str[j] == '>' && cursor != l.end())
                cursor++;
            else if (str[j] == '-' && cursor != l.begin())
                cursor = l.erase(--cursor);
            else if (str[j] != '<' && str[j] != '>' && str[j] != '-')
                l.insert(cursor, str[j]);
        }
        for (auto it = l.begin(); it != l.end(); it++)
            cout << *it;
        cout << '\n';
    }
}