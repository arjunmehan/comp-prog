#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, ai, ans = 0, maxa = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            if (ai < maxa)
            {
                ans++;
            }
            else
            {
                maxa = ai;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}