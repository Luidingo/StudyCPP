#include <iostream>

using namespace std;

int main()
{
	string name, rank;
	double credit, score;
	double sumScore = 0, sumCredit = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> name >> credit >> rank;
		if (rank == "P") continue;

		sumCredit += credit;

		if (rank == "F") continue;

		if (rank[0] == 'A') score = 4;
		else if (rank[0] == 'B') score = 3;
		else if (rank[0] == 'C') score = 2;
		else if (rank[0] == 'D') score = 1;
		

		if (rank[1] == '+') score += 0.5f;
		sumScore += credit * score;
	}
	double avg = sumScore / sumCredit;
	cout << avg;
}
