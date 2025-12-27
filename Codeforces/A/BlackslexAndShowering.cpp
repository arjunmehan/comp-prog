#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int ai;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }

        int maxdiff = abs(a[0] - a[1]);
        ll sum = 0;
        for (int i = 1; i < n - 1; i++)
        {
            maxdiff = max(maxdiff, abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]) - abs(a[i - 1] - a[i + 1]));
            sum += abs(a[i - 1] - a[i]);
        }
        maxdiff = max(maxdiff, abs(a[n - 2] - a[n - 1]));
        sum += abs(a[n - 2] - a[n-1]);
        cout << sum - maxdiff << endl;
    }

    return 0;
}