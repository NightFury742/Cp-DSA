#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n <= 2)
            cout << 0 << endl;
        else
        {
            if (n % 2 == 0)
            {
                cout << n - (n / 2 + 1) << endl;
            }
            else
            {
                cout << n - (n + 1) / 2 << endl;
            }
        }
    }
}