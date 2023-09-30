#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int m, n;
    cin >> m >> n;
    if (m % 2 == 0)
    {
        cout << n * (m / 2);
    }
    else
    {
        int x = m / 2;
        cout << (x * n) + (n / 2);
    }
}
