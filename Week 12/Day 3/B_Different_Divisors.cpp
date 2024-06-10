#include <bits/stdc++.h>
using namespace std;

int is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int d, p, q;
        cin >> d;
        p = d + 1;
        while (!is_prime(p))
        {
            p++;
        }
        q = p + d;
        while (!is_prime(q))
        {
            q++;
        }
        cout << p * q << "\n";
    }
    return 0;
}