#define ll long long
long long solve(int N, int M, vector<int> &arr)
{

    vector<int> pre_min(N);
    pre_min[0] = arr[0];

    for (int i = 1; i < N; i++)
    {
        pre_min[i] = min(pre_min[i - 1], arr[i]);
    }

    vector<int> suff_min(N);
    suff_min[N - 1] = arr[N - 1];

    for (int i = N - 2; i >= 0; i--)
    {
        suff_min[i] = min(suff_min[i + 1], arr[i]);
    }

    long long mini = 1e18 + 1;

    for (int i = 0; i + M - 1 < N; i++)
    {
        mini = min(mini, (1ll) * pre_min[i] * suff_min[i + M - 1]);
    }
    return mini;
}