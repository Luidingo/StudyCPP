#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int fst = -1, scd;
    bool a = false;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 2)
        {
            if(fst == -1)
            {
                a = true;
                fst = i;
                scd = i;
            }
            else
            {
                if(scd < i)
                    scd = i;
            }
        }
    }
    if(a)
    {
        for(int i = fst; i <= scd; i++)
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.empty())
        answer.push_back(-1);
    return answer;
}