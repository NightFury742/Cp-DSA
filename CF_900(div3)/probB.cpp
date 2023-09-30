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
    vector<ll> vec;
    while (t--)
    {
        ll n;
        cin >> n;
        ll s;
        s = 5;

        for (int i = 1; i < n + 1; i++)
        {
            if (i == 1)
                cout << 1 << " ";
            else if (i == 2)
                cout << 3 << " ";
            else
            {
                cout << s << " ";
                s += 1;
            }
        }
        cout << endl;
    }
}