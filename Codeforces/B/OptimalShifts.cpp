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
        char c;
        int start = -1;
        int zeros = 0;
        int maxz = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == '0')
            {
                zeros++;
            }
            else
            {
                maxz = max(maxz, zeros);
                if (start == -1)
                    start = zeros;
                zeros = 0;
            }
        }
        cout << max(maxz, start + zeros) << '\n';
    }
    return 0;
}