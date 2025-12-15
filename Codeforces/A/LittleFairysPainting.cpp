#include <bits/stdc++.h>
#include <set>

using namespace std;
using ll = long long;

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
        set<int> dis;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
            dis.insert(ai);
        }

        int minl = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= dis.size() && a[i] < minl)
            {
                minl = a[i];
            }
        }

        cout << minl << "\n";
    }
    return 0;
}