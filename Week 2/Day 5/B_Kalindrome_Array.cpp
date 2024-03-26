#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, flag = 1;
        cin >> n;
        int arr[n];
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n <= 2)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (arr[i] != arr[n - i - 1])
                {
                    a = arr[i];
                    b = arr[n - i - 1];
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != a)
                {
                    v1.push_back(arr[i]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != b)
                {
                    v2.push_back(arr[i]);
                }
            }
            for (int i = 0; i < v1.size() / 2; i++)
            {
                if (v1[i] != v1[v1.size() - i - 1])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                flag = 1;
                for (int i = 0; i < v2.size() / 2; i++)
                {
                    if (v2[i] != v2[v2.size() - i - 1])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    cout << "YES"
                         << "\n";
                }
                else
                {
                    cout << "NO"
                         << "\n";
                }
            }
        }
    }
    return 0;
}