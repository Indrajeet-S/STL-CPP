#include<bits/stdc++.h>
using namespace std;

struct node{
    int num;
    string s;
    double val;

    node(num_, s_, val_){
        num = num_;
        s = s_;
        val = val_;
    }
};

int main() {

   node *s1 = new node(23, "Hiii", 45.67);
   node s1 = node(23, "Hiii", 45.67);

    return 0;
}