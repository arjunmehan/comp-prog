#include <bits/stdc++.h>

using namespace std;

long long factorial(long long x, long long m)
{
    long long ans = 1;
    for (long long i = m + 1; i <= x; i++)
    {
        ans *= i;
        ans %= 998244353;
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        int a0;
        cin >> a0;
        int ai;
        vector<int> a;
        int maxa = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            maxa = max(maxa, ai);
            a.push_back(ai);
        }

        long long maxd = 0;
        int maxc = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == maxa)
                maxc++;
            maxd += maxa - a[i];
        }

        long long ans;
        if (maxd - a0 < n)
        {
            if (n - (maxd - a0) < maxc)
            {
                ans = 0;
            }
            else if (maxd - a0 > 0)
                ans = (((factorial(n - (maxd - a0), n - (maxd - a0) - maxc)) % 998244353) * factorial(n - maxc, 0) % 998244353);
            else
            {
                ans = factorial(n, 0);
            }
        }
        else
        {
            ans = 0;
        }
        cout << (ans % 998244353) << endl;
    }

    return 0;
}