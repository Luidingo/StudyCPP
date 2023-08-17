#include <iostream>
#include <vector>

#define INF 99999999
#define MAX 100

using namespace std;

int FindShortestNode(int V, vector<int> Dist, vector<bool> isVisitedNode)
{
	int minCost = INF;
	int minIdx = -1;

	for (int i = 0; i < V; i++)
	{
		if (isVisitedNode[i] == true) continue;
		if (Dist[i] < minCost)
		{
			minCost = Dist[i];
			minIdx = i;
		}
	}

	return minIdx;
}

int Dijkstra(int start, int V, int Cost[][MAX])
{
	// Dist�� INF�� ���� �ʱ�ȭ
	vector<int> Dist(V, INF);
	// �湮 ���� Ȯ���� ���� �迭 ���� (false�� �ʱ�ȭ)
	vector<bool> isVisitedNode(V, false);

	// ���� ����� ����� 0���� ����
	Dist[start] = 0;
	for (int i = 0; i < V; i++)
	{
		if (Cost[start][i] != INF)
			Dist[i] = Cost[start][i];
	}
	
	for (int i = 0; i < V - 1; i++)
	{
		int ShortestNode = FindShortestNode(V, Dist, isVisitedNode);
		isVisitedNode[ShortestNode] = true;
		for (int i = 0; i < V; i++)
		{
			// �湮���� ���� ��� �߿� ���� ���� �ּ� ��� ��带 �����ϴ°� �� ������ ��� ����
			if (!isVisitedNode[i] && Dist[ShortestNode] + Cost[ShortestNode][i] < Dist[i])
				Dist[i] = Dist[ShortestNode] + Cost[ShortestNode][i];
		}
	}
	return Dist[V - 1];
}

int main()
{
	int V, E;
	int Cost[MAX][MAX];
	cout << "����� ���� �Է� : ";
	cin >> V;
	cout << "������ ���� �Է� : ";
	cin >> E;

	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			Cost[i][j] = INF;
		}
	}

	for (int i = 0; i < E; i++)
	{
		int from, to, cost;
		cout << "��� ���, ���� ���, ��� ������ �Է� : ";
		cin >> from >> to >> cost;
		// ����� �׷����̹Ƿ� from�� to ��� ���� ���� ��� ����. �ܹ����� ��쿣 from -> to �� �ۼ�
		Cost[from][to] = cost;
		Cost[to][from] = cost;
	}

	int dist = Dijkstra(0, V, Cost);
	cout << "���ͽ�Ʈ�� ���(������������ �ּ� ���) : " << dist;
}