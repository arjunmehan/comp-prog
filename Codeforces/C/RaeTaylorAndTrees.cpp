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
        int tree_min = a[0];
        int total_min = a[0];
        for (int i = 1; i < n; i++)
        {
            total_min = min(a[i], total_min);
            if (a[i] > tree_min)
                tree_min = total_min;
        }
        if (tree_min == total_min)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}