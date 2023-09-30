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
    vector<ll> vec;
    while (t--)
    {
       ll n,k,x;
       cin>>n>>k>>x;

       if((k*(k+1))/2>x){
        cout<<"NO"<<endl;
       }

       else if(x>(2 * n - k + 1) * k / 2){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
}