#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;
        int c = 1;
        int counter = 0;
        val = 0;
        vector<int> vec;
        while (n)
        {
            if (n % 10 != 0)
            {
                val = (n % 10) * c;
                c *= 10;
                n = n / 10;
                
                counter++;
                vec.push_back(val);
            }
            else{
                n=n/10;
                c*=10;
            }
        }
        cout << counter << endl;
        for (auto val : vec)
        {
            cout << val << " ";
        }
        cout<<endl;
    }
}