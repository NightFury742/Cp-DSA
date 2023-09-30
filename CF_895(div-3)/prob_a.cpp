#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int T, diff;
    cin >> T;
    while (T--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        diff = abs(a - b);

        cout << ceil((diff / 2.0) / c) << endl;
    }
}