#include <iostream>
using namespace std;

string WhiteStartedBoard[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BlackStartedBoard[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string Board[50];

int WhiteBoardCount(int x, int y)
{
	int Count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (Board[x + i][y + j] != WhiteStartedBoard[i][j])
				Count++;
		}
	}
	return Count;
}

int BlackBoardCount(int x, int y)
{
	int Count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (Board[x + i][y + j] != BlackStartedBoard[i][j])
				Count++;
		}
	}
	return Count;
}

int main()
{
	int Row, Col;
	int minVal = 100;

	cin >> Col >> Row;

	for (int i = 0; i < Col; i++)
		cin >> Board[i];

	for (int i = 0; i + 8 <= Col; i++)
	{
		for (int j = 0; j + 8 <= Row; j++)
		{
			int tmp;
			tmp = (WhiteBoardCount(i, j) < BlackBoardCount(i, j)) ? WhiteBoardCount(i, j) : BlackBoardCount(i, j);
			minVal = (tmp < minVal) ? tmp : minVal;
		}
	}

	cout << minVal;
}

