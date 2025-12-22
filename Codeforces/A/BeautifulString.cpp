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
        vector<int> ans;
        char ai;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            if (ai == '0')
                ans.push_back(i);
        }

        cout << ans.size() << endl;
        for (int i : ans)
            cout << i + 1 << " ";
        cout << endl;
    }

    return 0;
}