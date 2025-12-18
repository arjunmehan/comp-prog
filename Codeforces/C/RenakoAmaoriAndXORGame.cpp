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
        vector<int> b;
        int rxor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            rxor = rxor ^ ai;
            a.push_back(ai);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            rxor = rxor ^ ai;
            b.push_back(ai);
        }
        int sigbit = 0;
        for (int i = 0; i < 32; i++)
        {
            if (rxor & (1 << i))
                sigbit = i;
        }
        if (rxor == 0)
            cout << "Tie" << endl;
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if ((a[i] ^ b[i]) & (1 << sigbit))
                {
                    if (i % 2 == 0)
                    {
                        cout << "Ajisai" << endl;
                    }
                    else
                    {
                        cout << "Mai" << endl;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}