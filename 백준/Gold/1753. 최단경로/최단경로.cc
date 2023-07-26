#include <iostream>
#include <vector>
#include <queue>

#define MAX_LENGTH 20000
#define INF 9999999

using namespace std;

vector<int> dijkstra(int start, int V, vector<pair<int, int>> adj[]) {
    vector<int> dist(V, INF);
    priority_queue<pair<int, int> > pq;

    dist[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for (int i = 0; i < adj[cur].size(); i++) {   
            int next = adj[cur][i].first;    
            int nCost = cost + adj[cur][i].second;   
            if (nCost < dist[next]) {     
                dist[next] = nCost;
                pq.push(make_pair(-nCost, next));
            }
        }
    }

    return dist;
}

int main()
{
    int V, E;
    cin >> V >> E;

    int K;
    cin >> K;
    K--;

    vector<pair<int, int>> adj[MAX_LENGTH];

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].push_back(make_pair(v, w));
    }

    vector<int> dist = dijkstra(K, V, adj);
    
    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] == INF)
            cout << "INF";
        else
            cout << dist[i];
        cout << "\n";
    }
}
