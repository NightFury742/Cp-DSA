#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '7' || s[i] == '4')
            c++;
    }

    if (c == 4 || c == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}