#include<bits/stdc++.h>
using namespace std;

int main() {

    // next_permutation(startIt, endIt) -> O(n)
    // use do while loop to print all the permutations 
    // string s = "abc"
    // all permutations are as follows :
    // abc
    // acd
    // bac
    // bca
    // cab
    // cba 

    // if s = "bac" then next_permutation returns true because 
    // next permutation is s="bca", which exists

    // if s="cba" then next_permutation returns false because 
    // next permutation doesn't exist anymore 

    // print all permutations
    cout<<"All permutations of abc are : "<<endl;
    string s = "bac";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
    cout<<endl;
    // there are n! permutations so TC of printing all of them is
    // n*n! -> next_permutation*all_permutations
    // TC -> n! to print all the permutations of a given string


    string s1 = "bac";
    cout<<next_permutation(s1.begin(), s1.end())<<endl;;
    cout<<s1<<endl;
    
    string s2 = "cba";
    cout<<next_permutation(s2.begin(), s2.end())<<endl;;
    cout<<s2<<endl;

    // for array
    int n = 3;
    int arr[] = {7, 4, 3};
    sort(arr, arr+n);
    do{
        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    } while(next_permutation(arr, arr+n));


    // previous_permutation
    bool res = prev_permutation(arr, arr+n);
    cout<<res<<endl;
    for(auto val:arr) cout<<val<<" ";
    cout<<endl;
    bool res1 = prev_permutation(arr, arr+n);
    cout<<res1<<endl;
    for(auto val:arr) cout<<val<<" ";
    cout<<endl;
    
    


    return 0;
}