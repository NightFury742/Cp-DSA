#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

signed main()
{
    string y, temp,old_y;
    cin >> y;
    old_y=y;
    unordered_set<char> s;

    while (true)
    {
        for (int i = y.size() - 1; i >= 0; i--)
        {
            s.insert(y[i]);
        }

        unordered_set<char>::iterator it;

        for (it = s.begin(); it != s.end(); it++)
        {
            temp.push_back(*it);
        }

        if (temp == y && temp!=old_y)
        {
            cout << temp;
            break;
        }
        else
        {
            s.clear();
            temp.clear();
            for (int i = y.size() - 1; i >= 0; i--)
            {
                if (y[i] != '9')
                {
                    ++y[i];
                    break;
                }
                else
                {
                    y[i] = '0';
                }
            }
            
        }
    }
}