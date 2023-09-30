#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;

    if(N/5>0){
        cout<<(N+5-1)/5;
    }
    else{
        cout<<1;
    }
}