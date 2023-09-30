#include <bits/stdc++.h>
using namespace std;
#define ll long long

signed main()
{
   string str;
   cin>>str;

   for(int i=0;i<str.size();i++){
    if(str[i]=='.'){
        cout<<0;
    }
    else if(str[i]=='-'){
        if(str[i+1]=='-'){
            cout<<2;
        }
        else{
            cout<<1;
        }
        i++;
    }
   }
}