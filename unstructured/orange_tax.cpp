void solve()
{
    int n;
    cin >> n;
    vector<int> cost(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> cost[i];

    vector<vector<vector<int>>> adj(n + 1);
    int m;
    cin >> m;
    int x, y, w, f;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> w >> f;
        adj[x].push_back({y, w, f});
        adj[y].push_back({x, w, f});
    }

    vector<int> ans;
    ans = cost;
    using vi = vector<int>;
    priority_queue<vi, vector<vi>, greater<vi>> pq;

    for (int i = 1; i < n + 1; i++)
    {
        pq.push({cost[i], i});
    }

    while (!pq.empty())
    {
        int curr_cost = pq.top()[0];
        int curr_node = pq.top()[1];
        pq.pop();

        if (curr_cost != ans[curr_node])
            continue;

        for (auto x : adj[curr_node])
        {
            if (ans[x[0]] > ans[curr_node] + x[1] + x[1] * x[2])
            {
                ans[x[0]] = min(ans[x[0]], ans[curr_node] + x[1] + x[1] * x[2]);
                pq.push({ans[x[0]], x[0]});
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
        cout << ans[i] << " ";
    cout << "\n";
}