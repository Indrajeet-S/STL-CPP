#include<bits/stdc++.h>
using namespace std;
// bitset container is used in segment trees 
int main() {

    bitset<5> bt;   // stores 1 or 0
    cin>>bt;
    cout<<bt<<endl;

    // all -> true or false 
    cout<<bt.all()<<endl; // if all bits are set returns true else false 

    // any -> true or false
    cout<<bt.any()<<endl; //if at least one bit is set then returns true else false

    // count -> counts the number of set bits
    cout<<bt.count()<<endl;

    // filp -> toggles the bit
    // bt.flip(2); // toggle the bit at index 2 
    // cout<<bt<<endl;
    // bt.flip(); // toggles all the bits
    // cout<<bt<<endl;

    // none -> true or false
    cout<<bt.none()<<endl; // if all bits are 0 returns true else false
    // for 00000 return 1 since all bits are 0 here 

    // set -> set the bit 
    //bt.set(); // set all the bits 
    // bt.set(3); // set the 3rd index bit
    // bt.set(2, 0); // set the 2nd index bit to 0
    // cout<<bt<<endl;

    // reset -> set bit to 0
    //bt.reset(); // make all bits to 0
    // bt.reset(2); // make 2nd bit to 0
    // cout<<bt<<endl;

    // size -> gives size of bitset container i.e. the number of bits it is holding
    cout<<bt.size()<<endl;

    // test -> true or false
    cout<<bt.test(2)<<endl; // check whether the 2nd index bit is set or not
    // if set i.e. 1 then returns true else false
    cout<<bt.test(3)<<endl;
    // checks the bit is set or not at index 3 

    



    return 0;
}