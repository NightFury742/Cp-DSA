#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;


    while(k--){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
}