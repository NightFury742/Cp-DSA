#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{

    int n, k;
    cin >> n >> k;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int max = *max_element(v.begin(), v.end());

    if (v[k-1] > max)
    {
        cout << 0 << endl;
    }
    else
    {
        for (auto &val : v)
        {
            if(val<=0){
                continue;
            }
            if (val >= v[k-1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
