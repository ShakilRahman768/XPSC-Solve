#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w, wj, indx = 1;
    cin >> n;
    vector<int> v(1000005);
    for (int i = 1; i <= n; i++)
    {
        cin >> w;
        while (w--)
        {
            v[indx] = i;
            indx++;
        }
    }
    cin >> wj;
    while (wj--)
    {
        cin >> w;
        cout << v[w] << endl;
    }
    return 0;
}