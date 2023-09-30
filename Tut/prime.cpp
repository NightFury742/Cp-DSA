#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int c = 0;
        for(int i = 2; i*i < n; i++)
        {
            c+=(n%i==0);
        }
        if(c) cout << "no" << endl;
        else cout << "yes" << endl;
    }
}
