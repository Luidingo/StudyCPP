#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int income = 0;
    sort(score.rbegin(), score.rend());
    for (int i = m - 1; i < score.size(); i += m)
    {
        income += m * score[i];
    }
    return income;
}

