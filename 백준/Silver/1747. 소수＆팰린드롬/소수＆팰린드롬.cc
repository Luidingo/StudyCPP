#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPrime(int N) {
	if (N < 2) return false;
	for (int i = 2; i < N; i++)
		if (N % i == 0) return false;
	return true;
}

bool Pal(string N) {
	string str = N;
	reverse(N.begin(), N.end());
	if (N == str) return true;
	return false;
}

int main(void) {
	int N;
	cin >> N;

	for (int i = N; ; i++) {
		// 만약 i가 소수이고 팰린드롬이면
		if (Pal(to_string(i)))
        {
            if (isPrime(i))
            {
                cout << i;
                return 0;
            }
        }
	}
}