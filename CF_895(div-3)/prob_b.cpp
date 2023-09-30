#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    int T, counter;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> ans;

        while (n--)
        {
            int d, s, k;
            cin >> d >> s;
            k = 0;
            while (1)
            {
                k++;
                if (k == d)
                {
                    for (int i = s; i > 0; i--)
                    {
                        if (abs(d - k) * 2 >= s)
                        {
                            ans.push_back(k - 1);
                            break;
                        }
                        else if (s == 1)
                        {
                            ans.push_back(k);
                        }
                        else
                        {
                            k++;
                        }
                    }
                    break;
                }
                else
                {
                    continue;
                }
            }
        }

        int mini = INT_MAX;
        for (auto &val : ans)
        {
            if (val < mini)
            {
                mini = val;
            }
        }
        cout << mini << endl;
    }
}