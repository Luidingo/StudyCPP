#include <string>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int network[200];

void bfs(vector<vector<int>>& computers, int computerId, int networkId)
{
    // 컴퓨터 Id가 들어가는 큐
    queue<int> q;
    q.push(computerId);
    network[computerId] = networkId;
    
    while(!q.empty())
    {
        int cId = q.front();
        q.pop();
        
        for(int i = 0; i < computers[cId].size(); i++)
        {
            if(i != cId && computers[cId][i] && network[i] == -1)
            {
                q.push(i);
                network[i] = networkId;
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    memset(network, -1, sizeof(network));
    int networkId = 0;
    for(int i = 0; i < n; i++)
    {
        // 아직 network id를 못가진 경우
        if (network[i] == -1)
        {
            networkId++;
            bfs(computers, i, networkId);
        }
    }
    return networkId;
}