#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
   ll n,s_o,s_e;
   cin>>n;
   s_o=0;
   s_e=0;

   if(n%2!=0){
    s_o=(1+n)*(-1/2.0);
    cout<<s_o;
   }

   else{
    s_e=(n/4.0)*(2);
    cout<<s_e;
   }
 
}