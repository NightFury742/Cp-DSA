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

    int u=0, l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 97)
            l++;
        else
            u++;
    }
   

    if (l >= u)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << char(tolower(s[i])) << "";
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << char(toupper(s[i])) << "";
        }
    }
}