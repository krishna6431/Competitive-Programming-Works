class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst, int k)
    {
        vector<pair<int, int>> graph[n];
        for (int i = 0; i < flights.size(); i++)
        {
            graph[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        pq.push({0, {src, 0}});

        vector<int> distance(n, 1e9);

        while (!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            int station = it.first;
            int node = it.second.first;
            int dist = it.second.second;
            if (station > k)
                break;
            for (auto it : graph[node])
            {
                int neighbor = it.first;
                if (dist + it.second < distance[neighbor])
                {
                    distance[neighbor] = dist + it.second;
                    pq.push({station + 1, {neighbor, distance[neighbor]}});
                }
            }
        }
        if (distance[dst] == 1e9)
            return -1;
        return distance[dst];
    }
};