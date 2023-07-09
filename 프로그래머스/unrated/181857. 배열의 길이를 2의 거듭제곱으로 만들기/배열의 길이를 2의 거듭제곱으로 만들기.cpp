#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int len = 1;
    while(len < arr.size())
        len *= 2;
    vector<int> answer = arr;
    while(answer.size() < len)
        answer.push_back(0);
    return answer;
}