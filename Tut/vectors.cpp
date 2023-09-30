#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<v.size()<<endl;
    for (int i=0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> v;  //dynamic sized
    int n;
    cin >>n;
    for (int i=0;i<n;i++){
        int x;
        cin >>x;
        v.push_back(x);// adds x at the end
    }
    printVec(v);
}
// v.pop_back() reomves the last element

// vector<int> v(10,3)    vector of size 10 with all values "3" if second value is not passed, default is 0
//  after declaring vectors as such, you can still increase or dec. its length.