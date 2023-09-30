#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll k,n,w,s;
    cin>>k>>n>>w;
     s=0;

    for(int i=1;i<=w;i++){
        s+=k*i;
    }

    if(n>=s){
        cout<<0;
    }
    else{
        cout<<s-n;  
    }
}