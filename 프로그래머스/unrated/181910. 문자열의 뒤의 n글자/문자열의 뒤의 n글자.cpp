#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int len = my_string.length();
    for(; n > 0; n--)
    {
        answer += my_string[len - n];
    }
    return answer;
}