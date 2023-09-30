#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    int N, T;
    cin >> N >> T;
    string s;
    char temp;
    cin >> s;


    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < s.size() - 1; j++)
        {
            if (int(s[j + 1]) > int(s[j]))
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j=j+1;
            }
        }
    }
    cout << s;
}