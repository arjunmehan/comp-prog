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
        ans.push_back((1 << (n)) - 1);
        for (int i = n; i >= 0; i--)
        {
            int base = (1 << (i + 1)) - 1;
            int j = 1 << (i + 2);
            while (base < (1 << (n)) - 1)
            {
                ans.push_back(base);
                base += j;
            }
        }
        for (int i = 0; i < pow(2, n); i += 2)
        {
            ans.push_back(i);
        }
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}