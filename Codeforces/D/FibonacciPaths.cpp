#include <bits/stdc++.h>
#include <map>
using ll = long long;
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        long long ans = 0;

        vector<pair<long long, long long>> a;
        vector<ll> value;
        ll ai;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back({ai, i});
            value.push_back(ai);
        }
        sort(a.begin(), a.end());

        ll bi;
        vector<vector<ll>> adj(n);
        vector<vector<ll>> rev(n);

        vector<map<ll, long long>> dp(n);

        for (int i = 0; i < m; i++)
        {
            cin >> ai >> bi;
            adj[--ai].push_back(--bi);
            rev[bi].push_back(ai);

            dp[bi][value[ai] + value[bi]] += 1;
        }

        for (int i = 0; i < n; i++)
        {
            auto [au, u] = a[i];
            for (ll v : rev[u])
            {
                dp[u][au + value[v]] += dp[v][au];
                dp[u][au + value[v]] %= 998244353;
            }
            for (auto [k, v] : dp[u])
            {
                ans += v;
                ans %= 998244353;
            }
        }

        cout << ans % 998244353 << "\n";
    }
}