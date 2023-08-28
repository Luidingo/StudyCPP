#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(long num)
{
    if (num <= 1)
        return false;
    for (long i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

string changeBinary(int num, int binary)
{
    string result = "";
    while (num > 0)
    {
        result += to_string(num % binary);
        num /= binary;
    }
    reverse(result.begin(), result.end());
    return result;
}

int solution(int n, int k) {
    int answer = 0;
    string tmp = "";

    if (k == 10)
        tmp = to_string(n);
    else
        tmp = changeBinary(n, k);

    string tmpNum = "";
    for (int i = 0; i < tmp.length(); i++)
    {
        if (tmp[i] == '0' && tmpNum != "")
        {
            if (isPrime(stol(tmpNum)))
                answer++;
            tmpNum = "";
        }
        else
            tmpNum += tmp[i];
    }

    if (isPrime(stol(tmpNum)))
        answer++;

    return answer;
}