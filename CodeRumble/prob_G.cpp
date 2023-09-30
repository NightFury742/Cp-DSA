#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int t;

    cin >> t;
    while (t--)
        
    {
        ll maxi;
        maxi = 0;
        ll n;
        cin >> n;
        vector<ll> vec;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            vec.push_back(temp);
        }

        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            if(vec[i]*(n-i)>maxi){
                maxi=vec[i]*(n-i);
            }
        }
        cout<<maxi<<endl;
    }
}