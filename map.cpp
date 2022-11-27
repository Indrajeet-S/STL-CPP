#include<bits/stdc++.h>
using namespace std;
// Everything in map has the TC O(logn)
// logn is the TC of map

int main() {

    // KEY VALUE 
    // map stores unique keys 
    map<string, int> mp;
    mp["Sujal"] = 61;
    mp["Prathmesh"]= 29;
    //mp["Prathmesh"]= 45; // update(overwrite) the previous value to 45
    mp["Indrajeet"] = 60;
    mp.emplace("Gaurav", 34); // insert not used with map, use only emplace 


    mp.erase("Prathmesh"); // mp.erase(key/iterator);

    //printing content of map
    // M1
    for(auto val:mp) cout<<val.first<<" "<<val.second<<endl;
    cout<<endl;
    // M2
    for(auto it=mp.begin(); it!=mp.end(); it++) cout<<it->first<<" "<<(*it).second<<endl;
    cout<<endl;

    auto it = mp.find("Indrajeet"); 
    cout<<(*it).second<<endl;
    cout<<it->second<<endl;

    if(mp.empty()) cout<<"Yes it is empty"<<endl;
    else cout<<"No, not empty"<<endl;

    int a = mp.count("Sujal"); // always return 1 in case of map since map stores only unique keys
    cout<<a<<endl;



    // UNORDERED MAP
    // does not stores in any order 
    unordered_map<int, int> ump;
    // O(1) in almost all cases 
    // O(n) in the worst case, where n is the size of the container

    // pair<pair<int, int>> pr;
    // vector<pair<int, int>> vp;
    // map<pair<int, int>, int> mpp;

    // we can't use pair as a key in unordered_map 
    // unordered_map<pair<int, int>, int> ump; this is invalid




    return 0;
}