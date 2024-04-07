#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mat;
vector<int> v;
int dfs(int src, int des)
{
    int cnt = 0;
    for (int child : mat[src])
    {
        if (child != des)
        {
            cnt = cnt + dfs(child, src);
        }
    }
    if (cnt == 0 && mat[src].size() == 1)
    {
        cnt++;
    }
    v[src] = cnt;
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        mat.resize(n + 1);
        v.resize(n + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        long long int ans;
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            ans = (1LL * v[a]) * (1LL * v[b]);
            cout << ans << endl;
        }
        mat.clear();
        v.clear();
    }
    return 0;
}