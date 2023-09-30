#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    vector<ll> hsh(10, 0);
    while (n--)
    {
        string str;
        cin >> str;
        if (str[0] == 'T')
            hsh[0]++;
        else if (str[0] == 'C')
            hsh[1]++;
        else if (str[0] == 'O')
            hsh[2]++;
        else if (str[0] == 'D')
            hsh[3]++;
        else if (str[0] == 'I')
            hsh[4]++;
    }

    cout << hsh[0] * 4 + hsh[1] * 6 + hsh[2] * 8 + hsh[3] * 12 + hsh[4] * 20;
}