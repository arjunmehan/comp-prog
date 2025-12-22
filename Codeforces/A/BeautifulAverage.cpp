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
        int max_a = INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ai;
            max_a = max(max_a, ai);
        }
        cout << max_a << endl;
    }
    return 0;
}