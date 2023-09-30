#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int T;
    cin>>T;
    int x=0;
    while(T--){
        string inp;
        cin>>inp;
        vector<string> op;
        op.push_back(inp);

        for (auto & val :op){
            if(val=="X++" || val=="++X"){
                x++;
            }

            else{
                x--;
            }
        }
    }
    cout<<x<<endl;
}
