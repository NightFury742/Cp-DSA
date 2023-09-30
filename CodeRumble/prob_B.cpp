#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp;
    cin >> n;

    temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp ^ n;
    }

    cout << temp;

    // map<ll, ll> hsh;
    // int n;
    // cin >> n;
    // vector<ll> vec_odd;
    // for (int i = 0; i < n; i++)
    // {
    //     ll temp;
    //     cin >> temp;
    //     hsh[temp]++;
    // }

    // ll temp = 0;
    // for (auto &val : hsh)
    // {
    //     if (val.second % 2 != 0)
    //     {
    //         temp = temp ^ val.first;
    //     }
    // }
    // cout << temp;
}
// while(t--)
// {
//     vector<ll> vec;

//     // ll n;
//     // cin>>n;
//     // ll vecOdd=0,vecEven=0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     ll temp;
//     //     cin>>temp;
//     //     if(temp%2==0)
//     //     {
//     //         vecEven=vecEven^temp;
//     //     }
//     //     else vecOdd=vecOdd^temp;
//     // }
//     // cout<<vecEven^vecOdd<<endl;

// }
