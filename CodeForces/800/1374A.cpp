#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, n, c;
        cin >> x >> y >> n;
        c = n - (n % x) - (x - y);

        if (n < x && y < n)
        {
            cout << y << endl;
        }
        else if (n % x >= y)
        {
            {
                while (true)
                {
                    if (c < n - y && c + x <= n)
                    {
                        c += x;
                    }
                    else
                    {
                        break;
                    }
                }
                cout << c << endl;
            }
        }
        else
        {
            cout << c << endl;
        }
    }
}