#include <bits/stdc++.h>
using namespace std;
#define int long long signed main()
{
    int N, c;
    c = 0;
    cin >> N;
    string s, c_s;
    cin >> s;
    c_s = s;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            c_s.erase(i-c, 1);
        }
    }
    cout << c << endl;
}
