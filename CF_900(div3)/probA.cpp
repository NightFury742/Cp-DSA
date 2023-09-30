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
        int n, k, c;
        cin >> n >> k;
        vector<int> vec;
        c = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (vec[i] == k)
            {
                c++;
                break;
            }
        }

        if (c > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}