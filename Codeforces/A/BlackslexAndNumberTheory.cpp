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
        long ai;
        vector<long> a;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        sort(a.begin(), a.end());
        if (a[1] <= 2 * a[0])
        {
            cout << a[0] << endl;
        }
        else
        {
            cout << a[1] - a[0] << endl;
        }
    }

    return 0;
}