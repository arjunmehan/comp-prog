#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a;
        cin >> n;
        vector<int> odds, evens;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
                evens.push_back(a);
            else
                odds.push_back(a);
        }
        sort(odds.begin(), odds.end(), greater<int>());
        sort(evens.begin(), evens.end(), greater<int>());

        vector<long long> evensum;
        evensum.push_back(0);

        if (odds.size() == 0)
        {
            for (int i = 0; i < n; i++)
                cout << "0 ";
            cout << "\n";
            continue;
        }
        if (evens.size() == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << odds[0] << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << "\n";
            continue;
        }

        for (int i = 0; i < evens.size(); i++)
        {
            evensum.push_back(evensum[i] + evens[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1 && odds.size() % 2 == 0)
            {
                cout << "0 ";
                continue;
            }
            if (i <= evens.size())
            {
                cout << odds[0] + evensum[i] << " ";
            }
            else
            {
                if (i % 2 == evens.size() % 2)
                {
                    cout << odds[0] + evensum[evensum.size() - 1] << " ";
                }
                else
                {
                    cout << odds[0] + evensum[evensum.size() - 2] << " ";
                }
            }
        }
        cout << '\n';
    }
    return 0;
}