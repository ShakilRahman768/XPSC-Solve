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
        long long int n, x;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        priority_queue<long long int> pq;
        pq.push(arr[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (pq.top() >= arr[i])
            {
                x = pq.top() ^ arr[i];
                pq.pop();
                pq.push(x);
            }
            else
            {
                pq.push(arr[i]);
            }
        }
        cout << pq.size() << "\n";
    }
    return 0;
}