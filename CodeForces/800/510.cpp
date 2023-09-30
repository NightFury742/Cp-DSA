#include <bits/stdc++.h>
using namespace std;
#define ll long long  
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int c = 0;
    int odd_counter = 0;
    while (n)
    {
        if (c % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << '#';
            }
            cout << endl;
        }
        else
        {
            if (odd_counter % 2 == 0)
            {
                for (int i = 0; i < m - 1; i++)
                {
                    cout << '.';
                }
                cout << '#';
                cout << endl;
            }
            else
            {
                cout << '#';
                for (int i = 0; i < m - 1; i++)
                {
                    cout << '.';
                }

                cout << endl;
            }
            odd_counter++;
        }
        c++;
        n--;
    }
}