#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ai;
        vector<int> a;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        int tree_min = a[0];
        int total_min = a[0];
        vector<int> hanging;
        for (int i = 1; i < n; i++)
        {
            total_min = min(a[i], total_min);
            if (a[i] > tree_min)
            {
                adj[tree_min].push_back(a[i]);
                for (int u : hanging)
                    adj[a[i]].push_back(u);
                hanging.clear();
                tree_min = total_min;
            }
            else
            {
                hanging.push_back(a[i]);
            }
        }
        if (tree_min == total_min)
        {
            cout << "Yes" << "\n";
            for (int i = 1; i <= n; i++)
            {
                for (int u : adj[i])
                    cout << i << " " << u << "\n";
            }
        }
        else
            cout << "No" << "\n";
    }
    return 0;
}