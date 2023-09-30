#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int x=0;
    int y=0;
    int arr[6][6];
    for (int i=1;i<6;i++){
        for (int j=1;j<6;j++){
            cin>>arr[i][j];

        }
    }
    for (int i=1;i<6;i++){
        for (int j=1;j<6;j++){
            if (arr[i][j]){
                x=abs(3-j);
                y=abs(3-i);
            }

        }
    }
    cout<<x+y<<endl;
    
}
