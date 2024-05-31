#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m;
    pbds<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        p.insert(v);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v;
        cout << p.order_of_key(v + 1) << " ";
    }
    cout << '\n';
    return 0;
}