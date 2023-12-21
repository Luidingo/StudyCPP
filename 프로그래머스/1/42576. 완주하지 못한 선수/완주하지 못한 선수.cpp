#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    int idx;
    for(; idx < completion.size(); idx++)
    {
        if(participant[idx] != completion[idx])
            break;
    }
    return participant[idx];
}