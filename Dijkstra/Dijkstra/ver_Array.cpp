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
	// Dist를 INF로 전부 초기화
	vector<int> Dist(V, INF);
	// 방문 여부 확인을 위한 배열 선언 (false로 초기화)
	vector<bool> isVisitedNode(V, false);

	// 시작 노드의 비용을 0으로 설정
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
			// 방문하지 않은 노드 중에 시작 점이 최소 비용 노드를 경유하는게 더 가까우면 비용 갱신
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
	cout << "노드의 개수 입력 : ";
	cin >> V;
	cout << "간선의 개수 입력 : ";
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
		cout << "출발 노드, 도착 노드, 비용 순으로 입력 : ";
		cin >> from >> to >> cost;
		// 양방향 그래프이므로 from과 to 노드 간의 간선 모두 연결. 단방향일 경우엔 from -> to 만 작성
		Cost[from][to] = cost;
		Cost[to][from] = cost;
	}

	int dist = Dijkstra(0, V, Cost);
	cout << "다익스트라 결과(목적지까지의 최소 비용) : " << dist;
}