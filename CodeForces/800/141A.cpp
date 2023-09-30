#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string guest, host, left;
    cin >> guest >> host >> left;

    vector<int> input_vec(30, 0);
    vector<int> output_vec(30, 0);

    for (int i = 0; i < guest.size(); i++)
    {
        input_vec[int(guest[i]) - 65]++;
    }
    for (int i = 0; i < host.size(); i++)
    {
        input_vec[int(host[i]) - 65]++;
    }
    for (int i = 0; i <left.size(); i++)
    {
        output_vec[int(left[i])-65]++;
    }

    if (input_vec == output_vec)
        cout << "YES";
    else
        cout << "NO";  
}