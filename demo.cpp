#include<bits/stdc++.h>
using namespace std;

void f(string s, vector<char> &ds, int hash[]){
    if(ds.size()==s.size()){
        for(auto val:ds) cout<<val;
        cout<<endl;
        return;
    }

    for(int i=0; i<s.size(); i++){
        if(hash[i]==0){
            hash[i] = 1;
            ds.push_back(s[i]);
            f(s, ds, hash);
            hash[i] = 0;
            ds.pop_back();
        }
    }
}

int main() {

    string s;
    cin>>s;
    vector<char> ds;
    int hash[s.size()] = {0};
    f(s, ds, hash);

    return 0;
}