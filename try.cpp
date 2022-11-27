#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {11, 22, 33, 44};
    
    for(auto it = v.rbegin(); it!=v.rend(); it++){
        cout<<(*it)+1<<" ";
    }

    return 0;
}