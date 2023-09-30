#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    string str;
    cin>>str;
    set <char> items;
    for (int i = 0; i <n; i++)
    {
        str[i]=tolower(str[i]);
        items.insert(str[i]);
    }
    
    if(items.size()==26) cout<<"YES";
    else cout<<"NO";
    
}