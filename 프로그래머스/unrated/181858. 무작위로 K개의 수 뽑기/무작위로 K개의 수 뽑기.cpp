#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> seen;
    for(int num : arr) {
        if (seen.count(num) == 0)
        {
            answer.push_back(num);
            seen.insert(num);
        }
        if (answer.size() == k)
            break;
    }
    while(answer.size() < k)
        answer.push_back(-1);
    return answer;
}