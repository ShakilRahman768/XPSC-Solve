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
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "1" << "\n";
        }
        else if (n % 2 == 1)
        {
            cout << "-1" << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    cout << i;
                }
                else
                {
                    cout << n - i;
                }
                cout << " ";
            }
            cout << "\n";
        }
    }
}