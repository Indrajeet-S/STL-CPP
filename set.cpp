#include<bits/stdc++.h>
using namespace std;

int main() {

    // SET 
    set<int> st;
    // inserting elements in the set
    // O(logn)
    st.insert(41);
    st.insert(56);
    st.insert(12);
    st.insert(67);
    st.emplace(56); // emplace is bit faster than insert 
    st.insert(4);
    for(auto val:st) cout<<val<<" ";
    cout<<endl;


    // deleting a particular element so, we need to pass the iterator
    st.erase(st.begin());
    for(auto val:st) cout<<val<<" ";
    cout<<endl;

    // ersase a key
    st.erase(41);
    for(auto val:st) cout<<val<<" ";
    cout<<endl;

    //erase couple of elements from start 
    //st.erase(st.begin(), st.begin() + 1);

    // find the element in the set
    auto it = st.find(56);
    auto it1 = st.find(8);
    cout<<*it<<endl;
    cout<<*it1<<endl; //gives garbage value since 8 is not present in the set





    // UNORDERED SET
    unordered_set<int> us;
    // average case Time Complexity of O(1)
    // worst case time complexity is O(n) i.e. O(set size) -> linear time complexity 
    // if we want elements to be in ascending order then use ORDERED SET i.e. set 
    // if above is not the case (only wants uniques elements) then use UNORDERED SET i.e. unordered_set 
    // If you get TLE while using unordered_set then switch to set 
    us.insert(87);
    us.insert(134);
    us.insert(99);
    for(auto val:us) cout<<val<<" ";
    cout<<endl;




    // MULTI SET -> stores all the elements in sorted passion 
    multiset<int> ms;
    ms.insert(567);
    ms.insert(567);
    ms.insert(2);
    ms.insert(3);
    ms.insert(567);
    ms.insert(2);
    // ms = {2, 2, 3, 567, 567}
    for(auto val:ms) cout<<val<<" ";
    cout<<endl;

    int a = ms.count(567); // how many time that element is occured
    cout<<a<<endl; 
    ms.erase(567); // deletes all the instances of that element
    auto it2 = ms.find(2); // gives the iterator of first occurance of that element
    cout<<*it2<<endl;
    ms.clear(); // deletes all the elements 
    


    return 0;
}