#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v={2,3,4,5,6};
   for(int i=0;i<v.size();i++){
    cout<< v[i]<<" ";
   }
   cout<<endl;
   vector<int>:: iterator it=v.begin();    //v.begin points towards the first element and v.end() points towards the element next to the last one
   cout<<*(it+2)<<endl;

   for(it=v.begin(); it!=v.end();++it){     // looping using iterator, used to loop over data structures which don't have indexes
    cout<<*it<<endl;                        //use ++it instead of ++1 beacause the later move to the next mem location which wouldn't be valid 
   }
                                            // for discontinuous ds.  
   
                                           
//    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6}};

//    vector<pair<int,int>> :: iterator iti;

//    for(iti=v_p.begin();iti!=v_p.end();++iti){
//     cout<<(*iti).first<<" "<<(*iti).second<<endl;
//    }


//    for(iti=v_p.begin();iti!=v_p.end();++iti){         //another way to write     
//     cout<<iti->first<<" "<<iti->second<<endl;
//    }



//                                                           RANGE BASED LOOPS
    cout<<endl;
   for(int &value:v){         //shorter way to write a for loop
    cout<<value<<endl;        // added & to pass values by reference    
   }
}