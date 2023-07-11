#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    int len;
    string answer = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(a.size() > b.size())
    {
        len = a.size();
        b.resize(a.size(), '0');
    }
    else
    {
        len = b.size();
        a.resize(b.size(), '0');
    }
    int tmp2 = 0;
    for(int i = 0; i < len; i++)
    {
        int tmp = (a[i] - '0') + (b[i] - '0') + tmp2;
        tmp2 = tmp / 10;
        tmp %= 10;
        answer += tmp + '0';
    }
    if(tmp2)
        answer += tmp2 + '0';
    reverse(answer.begin(), answer.end());
    return answer;
}
