#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x1, x2;
        cin >> n >> x1 >> x2;

        string p;
        cin >> p;
        ll s1=0,d1=0;

        for (int i = 0; i < n; i++)
        {
            if( p[i]=='1' && p[i+1]=='1')
            {
                d1++;
                i++;
            }
            else if(p[i]=='1')
            {
                s1++;
            }
        }
        ll maxi =0;
        if(x1*2>x2) maxi=x2;
        else maxi = x1*2;
        ll ans = (d1*maxi)+(s1*x1);
        cout<<ans<<endl;
    }
}