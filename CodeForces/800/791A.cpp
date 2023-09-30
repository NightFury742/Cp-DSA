#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 10;
int arr[N];
int pf[N];
int diff[N];
signed main()
{
    int a,b,c;
    cin>>a>>b;
    c=0;

    while(true){
        if(a>b) break;
        else{
            a*=3;
            b*=2;
            c++;
        }
    }
    cout<<c<<endl;
}
