#include<bits/stdc++.h>
using namespace std;
// comparator function is a boolean function

bool comparator(int a, int b){

    // if(a<=b) return false;
    // else return true;
    //return (a>b);
}

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first<b.first) return true;
    else if(a.first==b.first){
        if(a.second>b.second) return true;
        else return false;
    }
    else return false;
    // if(a.first!=b.first) return (a.first<b.first);
    // else return(a.second>b.second);
}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n, comparator);

    for(auto val: arr) cout<<val<<" ";
    cout<<endl;

    vector<pair<int, int>> vp = {{1, 4}, {5, 2}, {5, 9}};
    sort(vp.begin(), vp.end(), comp);
    for(auto val:vp) cout<<val.first<<" "<<val.second<<endl;
    cout<<endl;

    int m = 4;
    int ary [] = {12, 45, 4, 35};
    sort(ary, ary+m, greater<int>());
    for(auto val:ary) cout<<val<<" ";
    cout<<endl;

    return 0;
}