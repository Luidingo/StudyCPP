#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int limit, int power) {
    int iron = 1;
    for(int i = 2; i <= number; i++)
    {
        int damage = 2;
        for(int j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
                damage++;
        }
        if (damage > limit)
            damage = power;
        iron += damage;
    }
    return iron;
}