#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> vec_p;
    vector<int> vec_q;
    vector<int> hsh(110, 0);
    for (int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        vec_p.push_back(temp);
        if (vec_p[i] > 0 && vec_p[i] <= n)
        {
            hsh[vec_p[i]]++;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        vec_q.push_back(temp);
        if (vec_q[i] > 0 && vec_q[i] <= n)
        {
            hsh[vec_q[i]]++;
        }
    }

    int counter = 0;
    for (int i = 0; i < hsh.size(); i++)
    {
        if (hsh[i] != 0)
            counter++;
    }
    if (counter == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}