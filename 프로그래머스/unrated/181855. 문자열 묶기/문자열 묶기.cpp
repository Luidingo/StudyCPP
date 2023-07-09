#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> arr(30);
    for(int i = 0; i < strArr.size(); i++)
        arr[strArr[i].length() - 1]++;
    int answer = *max_element(arr.begin(), arr.end());
    return answer;
}