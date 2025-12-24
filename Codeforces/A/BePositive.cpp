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
        int z = 0;
        int no = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            if (ai == 0)
                z++;
            if (ai == -1)
                no++;
        }
        cout << z + 2 * (no % 2) << endl;
    }
    return 0;
}