#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, c = 0, m = 1;
    cin >> n;
    long long int arr[n];
    long long int brr[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        brr[arr[i]]++;
    }
    for (int i = 2; i <= 100000; i++)
    {
        c = 0;
        for (int j = i; j <= 100000; j += i)
        {
            c += brr[j];
        }
        m = max(m, c);
    }
    cout << m << "\n";
    return 0;
}