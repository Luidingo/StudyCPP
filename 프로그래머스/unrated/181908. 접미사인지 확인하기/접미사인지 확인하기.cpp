#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> tmp;
    for(int i = 0; i < my_string.length(); i++)
        tmp.push_back(my_string.substr(i, my_string.length() - i));
    if(find(tmp.begin(), tmp.end(), is_suffix) == tmp.end())
        return 0;
    else
        return 1;
}