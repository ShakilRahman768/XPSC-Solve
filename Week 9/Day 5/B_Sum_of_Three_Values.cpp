#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, flag = 1;
    cin >> n >> x;
    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pair<int, int> p;
        p.first = a;
        p.second = i;
        arr.push_back(p);
    }
    sort(begin(arr), end(arr));
    for (int i = 0; i < n; i++)
    {
        int l, r;
        l = 0;
        r = n - 1;
        while (l != r)
        {
            int sum;
            sum = x - arr.at(i).first;
            if (l != i && r != i &&
                arr.at(l).first + arr.at(r).first == sum)
            {
                cout << arr.at(i).second << " " << arr.at(l).second << " "
                     << arr.at(r).second << "\n";
                flag = 0;
                break;
            }
            if (arr.at(l).first + arr.at(r).first < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << "IMPOSSIBLE" << "\n";
    }
}