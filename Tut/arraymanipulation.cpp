#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 10;
int arr[N];
int pf[N];
int diff[N];
signed main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        arr[a] = arr[a] + k;
        arr[b + 1] = arr[b + 1] - k for (int i=0);
    }
    pf[0] = 0;
    for (int i = 1; i <= n; i++)
    {    
             pf[i]=arr[i]+pf[i-1];
    }
    int count = INT_MIN;
    for (int i = 1; i < n + 1; i++)
    {
        if (pf[i] > count)
        {
            count = pf[i];
        }
    }
    cout << count;
    return 0;
}
