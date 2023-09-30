#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int,string> p; // pair ke andar data type jayega
    p={2,"abc"}; // p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;  // pehele 2 ayega fir abc

    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};

    for (int i=0; i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

}