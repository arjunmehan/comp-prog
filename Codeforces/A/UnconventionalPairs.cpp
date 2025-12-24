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
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        sort(a.begin(), a.end());
        int maxd = -1;
        for (int i = 0; i < n; i += 2)
        {
            maxd = max(a[i + 1] - a[i], maxd);
        }
        cout << maxd << endl;
    }
    return 0;
}