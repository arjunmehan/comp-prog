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
        multiset<int> sa;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            sa.insert(ai);
        }
        int m = 0;
        for (int i = 0; i < k; i++)
        {
            if (sa.count(i) == 0)
                m++;
        }
        cout << max(m, (int)sa.count(k)) << endl;
    }
    return 0;
}