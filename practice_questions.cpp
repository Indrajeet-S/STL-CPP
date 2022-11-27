#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i]; // sorted arr
    int x; 
    cin>>x;

    // Q) Find the first occurance of x
    // Method I -> O(logn*logn)
    if(binary_search(arr, arr+n, x)){
        int lb = lower_bound(arr, arr+n, x) - arr;
        cout<<lb<<endl;
    }
    else cout<<"Element not exists"<<endl;

    // Method II -> O(logn)
    int lb1 = lower_bound(arr, arr+n, x) - arr;
    if((lb1!=n) && (arr[lb1]==x)) cout<<"Element found at index : "<<lb1<<endl;
    else cout<<"Element not found"<<endl;

    
    // Q) Find the last occurance of x
    auto ub = upper_bound(arr, arr+n, x);
    int ind = ub - arr;
    ind--;
    if((ind>=0) && (arr[ind]==x)) cout<<"last occ : "<<ind<<endl;
    else cout<<"Not found"<<endl;


    // Q) Number of times x appears in array
    int lb_1 = lower_bound(arr, arr+n, x) - arr;
    int ub_1 = upper_bound(arr, arr+n, x) - arr;
    cout<<"frequency : "<<(ub_1-lb_1)<<endl;



    return 0;
}