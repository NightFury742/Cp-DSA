#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,temp;
    set<char> chr_set;
    getline(cin,s);

    for(auto val:s){
        if (val=='{' || val=='}' || val==',' || val==' '){
            continue;
        }

        chr_set.insert(val);

    }

    cout<<chr_set.size();

   

}   