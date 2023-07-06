#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer, a, b;
    string tmp1 = "", tmp2 = "", op;
    bool c = true;
    for(int i = 0; i < binomial.length(); i++)
    {
        if(binomial[i] >= 48 && binomial[i] <= 57)
        {
            if(c)
            {
                tmp1 += binomial[i];
            }
            else
            {
                tmp2 += binomial[i];
            }
        }
        else if(binomial[i] == ' ')
        {
            c = false;
        }
        else if(binomial[i] == '+')
            op = "+";
        else if(binomial[i] == '-')
            op = "-";
        else if(binomial[i] == '*')
            op = "*";
    }
    a = stoi(tmp1);
    b = stoi(tmp2);
    if(op == "+")
        answer = a + b;
    else if(op == "-")
        answer = a - b;
    else if(op == "*")
        answer = a * b;
    return answer;
}