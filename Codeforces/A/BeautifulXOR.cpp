#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int blim = 0;
        for (int i = 0; i < 32; i++)
        {
            if (b & (1 << i))
                blim = (1 << i);
        }
        if (a < blim)
        {
            cout << "-1" << endl;
            continue;
        }
        int abx = a ^ b;
        vector<int> ans;
        for (int i = 0; i < 32; i++)
        {
            if (abx & (1 << i))
                ans.push_back((1 << i));
        }
        cout << ans.size() << endl;
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}