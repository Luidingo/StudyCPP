#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> fail(string str)
{
	int len = str.length();
	int idx;
	vector<int> failure(len);
	failure[0] = -1;

	for (int i = 1; i < len; i++) {
		idx = failure[i - 1];

		while ((str[i] != str[idx + 1]) && (idx >= 0)) { // 일치할때까지 	 
			idx = failure[idx];
		}

		if (str[i] == str[idx + 1]) { // 일치하면 
			failure[i] = idx + 1;
		}
		else {	// 일치하지 않으면 
			failure[i] = -1;
		}
	}
	return failure;
}

int main(void)
{
	int L;
	cin >> L;

	string str;
	cin >> str;

	vector<int> v = fail(str);
	cout << L - v[L - 1] - 1;
}