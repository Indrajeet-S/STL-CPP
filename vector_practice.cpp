#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {11, 22, 33, 44};

    for(auto val : v) cout<<val<<" ";
    cout<<endl;
    
    for(auto &val : v) cout<<val<<" ";
    cout<<endl;

    for(auto it = v.begin(); it!=v.end(); it++) cout<<(*it)<<" ";
    cout<<endl;

    for(auto it = v.end()-1; it>=v.begin(); it--) cout<<(*it)+1<<" ";
    cout<<endl;

    for(auto it = v.rbegin(); it!=v.rend(); it++) cout<<(*it)<<" ";
    cout<<endl;

    vector<int> v1(5);
    for(auto val:v1) cout<<val<<" ";
    cout<<endl;

    vector<int> v2(8, 0);  // v1(size, element)
    for(auto val:v2) cout<<val<<" ";
    cout<<endl;

    vector<int> v3(3, 78);  // v1(size, element)
    for(auto val:v3) cout<<val<<" ";
    cout<<endl;

    // copy v into v4
    vector<int> v4(v.begin(), v.end());
    cout<<"V4 : ";
    for(auto val:v4) cout<<val<<" ";
    cout<<endl;  

    // v.emplace_back(12) takes less time than v.push_back(12)
    v.emplace_back(12);
    for(auto val:v) cout<<val<<" ";
    cout<<endl; 

    // define 10*20 vector with all elements 0
    // 2D vector declaration 
    vector<vector<int>> vec(10, vector<int> (20, 0));

    // 3D vector Declaration 
    // 10*20*30 vector 
    vector<vector<vector<int>>> cube(10, vector<vector<int>> (20, vector<int> (5)));

    

    return 0;
}