#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll arr[n], brr[m];
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= brr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(brr[j]);
            j++;
        }
    }
    while (i < n)
    {
        v.push_back(arr[i]);
        i++;
    }
    while (j < m)
    {
        v.push_back(brr[j]);
        j++;
    }
    for (ll i = 0; i < n + m; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}