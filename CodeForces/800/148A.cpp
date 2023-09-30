#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set <ll> items;

    for (int i  = 1; i <1e5+10; i++)
    {
        ll temp;
        if(k*i<=d) items.insert(k*i);
        if(l*i<=d) items.insert(l*i);
        if(m*i<=d) items.insert(m*i);
        if(n*i<=d) items.insert(n*i);
    }

    cout<<items.size()<<endl;    
}