#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
   string s1,s2,s1l,s2l;
   cin >>s1>>s2;

   for (int i=0;i<s1.length();i++){
    s1l.push_back(tolower(s1[i]));
    s2l.push_back(tolower(s2[i]));
   }

   if (s1l==s2l){
    cout<<0;
   }

   else if(s1l<s2l){
    cout<<-1;
   }

   else if(s1l>s2l){
    cout<<1;
   }
}