#include <bits/stdc++.h>
using namespace std ;
#define int long long
signed main()                            // multimap mei duplicate values dal sakte hai
{                                        // maps store a pair, sorted order mei keys store hoti hai, keys are unique
   map<int,string> m;                    //unordered_map ki time complexity O(1)hoti hai toh vo preferrable hai
// m[key]=value                          // unordered maps mei complex data structures kaam nhi karte kyunki unki hash value nhi hoti
   m[10]="modi";
   m[1]="eshaan";     //O(logn) ; n is size of map
   m.insert({5,"abc"});  

   for(auto &val: m){    //O(nlogn)
    cout<<val.first<<" "<< val.second<<endl;
   }

   auto it=m.find(5) ;  //returns a iterator which is the one corresponding to the passed value, if the key is not in map, returns map.end(  )
// O(logn)

//    m.erase(key), m.erase(iterator)  //deletes the key value pair in the map
//    O(logn)

//    m.clear()   //clears the map
return 0;
}