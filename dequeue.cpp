#include<bits/stdc++.h>
using namespace std;

int main() {

    // dequeue
    //dequeue<int> dq;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end, rbegin, rend
    // clear
    // empty
    // at 

    list<int> ls;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end, rbegin, rend
    // clear
    // empty
    // at 
    // remove -> O(1)
    ls.push_front(1);
    ls.push_front(3);
    ls.push_front(2);

    ls.remove(3); // O(1) operation it is
    for(auto val:ls) cout<<val<<" ";
    cout<<endl;


 

    return 0;
}