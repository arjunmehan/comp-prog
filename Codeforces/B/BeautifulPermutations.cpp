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
        cin >> n;
        ll sum = (n * (n + 1)) / 2;
        ll lrdiff;
        cout << 2 << " " << 1 << " " << n << endl;
        cin >> lrdiff;
        lrdiff -= sum;
        if (lrdiff == n)
        {
            cout << "! 1 " << n << endl;
            continue;
        }
        int l, r, m;
        l = 1;
        r = n;
        ll ai, bi;
        while (l != r)
        {
            m = (l + r) / 2;
            cout << "1 " << l << " " << m << endl;
            cin >> ai;
            cout << "2 " << l << " " << m << endl;
            cin >> bi;
            if (ai == bi)
                l = m + 1;
            else if (ai + lrdiff == bi)
                r = m;
            else
            {
                cout << "! " << m - (bi - ai) + 1 << " " << m + (lrdiff - (bi - ai)) << endl;
                break;
            }
        }
        if (l == r)
            cout << "! " << l << " " << r << endl;
    }
    return 0;
}
// 2, 2, 4, 5