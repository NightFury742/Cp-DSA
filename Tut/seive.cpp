#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 10;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (i % 2 == 0 && i > 2)
        {
            continue;
        }
        else
        {
            if (is_prime[i])
            {
                for (int j = i * i; j <= n; j += i)
                    is_prime[j] = false;
            }
        }
    }

    for (int i = 0; i < is_prime.size(); i++)
    {
        if (is_prime[i])
            cout << i << endl;
    }
}