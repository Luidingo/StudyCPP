#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0, num = 1;
    vector<int> arr;
    while(1)
    {
        auto it = find(rank.begin(), rank.end(), num);
        if(attendance[it - rank.begin()])
            arr.push_back(it - rank.begin());
        num++;
        if(arr.size() == 3)
            break;
    }
    answer = arr[0] * 10000 + arr[1] * 100 + arr[2];
    return answer;
}