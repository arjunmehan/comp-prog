#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<char> s;
        char si;
        int pi;
        vector<int> p;
        int all1 = 1;
        int all0 = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> si;
            s.push_back(si);
            if (si == '0')
                all1 = 0;
            if (si == '1')
                all0 = 0;
        }
        ll psum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> pi;
            psum += pi;
            p.push_back(pi);
        }
        ll a_need = 0;
        ll b_need = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a_need += p[i] / 2 + 1;
            else
                b_need += p[i] / 2 + 1;
        }
        if (a_need > x || b_need > y || (all1 == 1 && x + n > y) || (all0 == 1 && x < y + n) || psum > x + y)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }

    return 0;
}