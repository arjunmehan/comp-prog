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
        int o = 1;
        int e = 0;

        int i = 2;
        while ((o < e && o <= min(a, b) && e <= max(a, b)) || (o >= e && o <= max(a, b) && e <= min(a, b)))
        {
            // cout << "I: " << i << "  e: " << e << "  o: " << o << endl;
            if (i % 2 == 0)
            {
                e += pow(2, i - 1);
            }
            else
            {
                o += pow(2, i - 1);
            }
            i++;
        }
        cout << i - 2 << endl;
    }

    return 0;
}