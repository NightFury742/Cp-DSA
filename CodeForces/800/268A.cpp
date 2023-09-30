#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,c;
    cin >> n;
    c=0;
    vector<vector<int>> vec;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int x, y;
        cin >> x>> y;
        temp.push_back(x);
        temp.push_back(y);
        vec.push_back(temp);
        temp.clear();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                if(vec[i][0]==vec[j][1]){
                    c++;
                }
            }
        }
        
    }    
    cout<<c;
}