#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec;
    vector<int> temp;

    int sx, sy, sz, s;
    sx = sy = sz = 0;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            int inp;
            cin >> inp;
            temp.push_back(inp);
        }
        vec.push_back(temp);
        temp.clear();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                sx += vec[i][0];
            }
            else if (j == 1)
            {
                sy += vec[i][1];
            }
            else
            {
                sz += vec[i][2];
            }
        }
    }
    
    if(sx==0 && sy==0 &&sz==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}