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
        if (n % 2 == 1)
            cout << 0 << "\n";
        else
            cout << n / 4 + 1 << "\n";
    }
    return 0;
}