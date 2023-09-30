#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, maxi, mini, c;
    cin >> n;
    maxi = 0;
    mini = INT_MAX;
    c = 0;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    maxi = vec[0];
    mini=vec[0];

    for (int i = 1; i < n; i++)
    {
        if (vec[i] > maxi)
        {
            maxi = vec[i];
            c++;
        }
        else if (vec[i] < mini)
        {
            mini = vec[i];
            c++;
        }
    }

    cout << c;
}