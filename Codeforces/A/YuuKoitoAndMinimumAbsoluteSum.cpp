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
        vector<int> a;
        int ai;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        if (a[0] == -1)
        {
            if (a[a.size() - 1] == -1)
                a[a.size() - 1] = 0;
            a[0] = a[a.size() - 1];
        }
        if (a[a.size() - 1] == -1)
            a[a.size() - 1] = a[0];

        cout << abs(a[a.size() - 1] - a[0]) << "\n";
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}