#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int ai;
        vector<int> a;
        set<int> sa;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
            sa.insert(ai);
        }

        int m = -1;
        for (int i = 0; i < n; i++)
        {
            if (sa.count(i + 1) == 0)
            {
                m = i + 1;
                break;
            }
        }
        if (m == -1)
        {
            for (int i = 0; i < k; i++)
                cout << a[i % 3] << " ";
            cout << endl;
            continue;
        }
        vector<int> ans;
        ans.push_back(m);
        if ((a[a.size() - 1]) % n + 1 != m)
            ans.push_back((a[a.size() - 1]) % n + 1);
        else
            ans.push_back((a[a.size() - 1] + 1) % n + 1);
        ans.push_back(a[a.size() - 1]);

        for (int i = 0; i < k; i++)
            cout << ans[i % 3] << " ";
        cout << endl;
    }
    return 0;
}