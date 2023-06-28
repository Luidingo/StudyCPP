#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int fst = 0, scd = str_list.size();
    for(int i = 0; i < str_list.size(); i++)
    {
        if(str_list[i] == "l")
        {
            scd = i;
            break;
        }
        else if(str_list[i] == "r")
        {
            fst = i + 1;
            break;
        }
    }
    if (fst != 0 || scd != str_list.size())
        for(int i = fst; i < scd; i++)
            answer.push_back(str_list[i]);
    return answer;
}