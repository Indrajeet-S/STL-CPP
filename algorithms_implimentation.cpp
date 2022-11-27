#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    // O(nlogn)
    sort(arr, arr+n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    vector<int> v(n, 0); // v(n) also sets all elements to 0 
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;

    vector<int> vec = {45, 99, 26, 43, 14}; // sort only 99, 26, 43
    sort(vec.begin()+1, vec.begin()+4); // [1, 4) index is
    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;

    reverse(vec.begin(), vec.end());
    for(auto val:vec) cout<<val<<" ";
    cout<<endl;

    // maximum and minimum element
    // O(n)
    int maxe = *max_element(vec.begin(), vec.end());
    int mine = *min_element(vec.begin(), vec.end());
    cout<<maxe<<" "<<mine<<endl;
    // int maxe = INT_MIN;
    // for(int i=0; i<n; i++) if(arr[i]>maxe) maxe = arr[i];

    // sum of all elements
    // accumulate(start it, end it, initial value of sum) ... it -> iterator 
    // O(n)
    int sum = accumulate(vec.begin(), vec.end(), 0); 
    cout<<sum<<endl;
    // sum in the given range, 1st index to 3rd index sum
    int sumis = accumulate(vec.begin()+1, vec.begin()+4, 0); // [) 
    cout<<sumis<<endl;
    // given range is from index i to j then 
    // sum = 0;
    // for(int k=i; k<=j; k++) sum += arr[k];

    int a[] = {12, 34, 12, 35, 678, 12};
    int m = 6;
    // O(n)
    int cnt = count(a, a+m, 12);
    cout<<cnt<<endl;
    // int cnt = 0;
    // for(int i=0; i<n; i++) if(arr[i]==k) cnt++;

    // find the first occurance of given element
    // returns iterator
    auto it = find(a, a+m, 34);
    cout<<(*it)<<endl;
    // returns index of that element
    auto it1 = find(a, a+m, 34) - a;
    cout<<(it1)<<endl;

    auto it2 = find(vec.begin(), vec.end(), 43);
    int ind = it2 - vec.begin();
    cout<<ind<<endl;

    // Binary Search -> return true or false -> O(logn)
    // container must be sorted 
    vector<int> v3 = {15, 56, 78, 455, 677};
    cout<<binary_search(v3.begin(), v3.end(), 69)<<endl;
    bool res = binary_search(v3.begin(), v3.end(), 455);
    // binary_search(startIt, endIt, element);
    cout<<res<<endl;

    // Lower Bound of x -> index of element >= x 
    // TC of lb and ub -> O(logn)
    // lower bound returns an iterator pointing to the first element which is >=x 
    vector<int> v4 = {12, 34, 75, 75, 322};
    auto lb = lower_bound(v4.begin(), v4.end(), 75);
    int lb_ind = lb - v4.begin();
    cout<<lb_ind<<endl;

    int lb1 = lower_bound(v4.begin(), v4.end(), 355) - v4.begin();
    cout<<lb1<<endl;

    // Upper Bound of x -> index of element > x 
     auto ub = upper_bound(v4.begin(), v4.end(), 75);
    int ub_ind = ub - v4.begin();
    cout<<ub_ind<<endl;

    int ub1 = upper_bound(v4.begin(), v4.end(), 35) - v4.begin();
    cout<<ub1<<endl;

    
 

    return 0;
}