    #include <bits/stdc++.h>
    using namespace std;
    #define int long long

    signed main()
    {
    string s;
    cin>>s;
    vector<char> final;
    multiset<char> s_str;
    for(auto &val:s){
        s_str.insert(val);
    }

    s_str.erase('+');
    for(auto &val:s_str){
        final.push_back(val);
        final.push_back('+');
    }

    if(final[final.size()-1]=='+'){
        final.pop_back();
    }

    for(auto &val:final){
        cout<<val;
    }
    }
