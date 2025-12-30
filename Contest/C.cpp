#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        int ai;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            a.push_back(ai);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            b.push_back(ai);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            c.push_back(ai);
        }

        long long comp1 = 0;
        for (int i = 0; i < n; i++)
        {
            int w = 1;

            for (int j = 0; j < n; j++)
            {
                if (c[j] <= b[(j + i) % n])
                    w = 0;
            }

            if (w == 1)
                comp1++;
        }
        long long comp2 = 0;
        for (int i = 0; i < n; i++)
        {
            int w = 1;

            for (int j = 0; j < n; j++)
            {
                if (b[j] <= a[(j + i) % n])
                    w = 0;
            }

            if (w == 1)
                comp2++;
        }

        cout << comp1 * comp2 * n << endl;
    }

    return 0;
}