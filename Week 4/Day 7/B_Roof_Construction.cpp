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
        int m = n - 1;
        int c = 0;
        while (m > 0)
        {
            c++;
            m /= 2;
        }
        int j = 1;
        c--;
        while (c > 0)
        {
            j = j * 2;
            c--;
        }
        for (int i = n - 1; i >= j; i--)
        {
            cout << i << " ";
        }
        for (int i = 0; i < j; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}