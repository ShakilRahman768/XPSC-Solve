vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    queue<long long int> q;
    vector<long long int> v;

    long long int l = 0, r = 0;
    while (r < N)
    {
        if (A[r] < 0)
        {
            q.push(A[r]);
        }
        if (r - l + 1 == K)
        {
            if (q.size() >= 1)
            {
                v.push_back(q.front());
                if (A[l] == q.front())
                {
                    q.pop();
                }
            }
            else
            {
                v.push_back(0);
            }
            l++;
        }
        r++;
    }
    return v;
}