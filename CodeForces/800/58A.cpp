#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
    string s, temp = "";
    cin >> s;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == 'h' && temp.size() == 0) temp.push_back(s[i]);
        else if(s[i] == 'e' && temp.size() == 1) temp.push_back(s[i]);
        else if(s[i] == 'l' && (temp.size() == 2 || temp.size() == 3)) temp.push_back(s[i]);
        else if(s[i] == 'o' && temp.size() == 4) temp.push_back(s[i]); 
    }
    if(temp == "hello") cout << "YES\n";
    else cout << "NO\n";
}