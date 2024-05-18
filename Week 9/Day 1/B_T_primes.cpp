#include <bits/stdc++.h>
using namespace std;
int check(long long int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int checksq(long long int n)
{
    long long int x = sqrtl(n);
    if ((x * x) == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (check(sqrtl(arr[i])) && checksq(arr[i]))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}