#include<bits/stdc++.h>
using namespace std;

int main() {
    // priority_queue -> works like stack only difference is element get sorted when pushed
    // priority_queue -> stores all elements in sorted order and TC -> O(logn)
    // push, pop, size, empty, top
    cout<<"priority queue"<<endl; // it is a maximum priority queue
    // maximum element is at the top
    priority_queue<int> pq;
    pq.push(2);
    pq.push(8);
    pq.push(1);
    pq.push(5);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<endl;

    cout<<"priority_queue of pair"<<endl;
    // priority_queue of pair
    priority_queue<pair<int, int>> pqp;
    pqp.push(make_pair(2, 5));
    pqp.push(make_pair(44, 56));
    pqp.push(make_pair(2, 8));
    pqp.push(make_pair(7, 5));

    cout<<pqp.top().first<<endl;
    pqp.pop();
    pqp.pop();
    cout<<pqp.size()<<endl;
    cout<<pqp.top().second<<endl;
    cout<<endl;

    // minimum priority queue using maximum pq (minumum element is at the top)
    cout<<"Minumum priority queue using priority queue"<<endl;
    priority_queue<int> pq1;
    pq1.push(-2);
    pq1.push(-8);
    pq1.push(-1);
    pq1.push(-5);

    cout<<(-1)*pq1.top()<<endl;
    pq1.pop();
    cout<<(-1)*pq1.top()<<endl;
    cout<<endl;


    // MINUMUM PRIORITY QUEUE 
    cout<<"Minimum priority_queue"<<endl;
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(2);
    minpq.push(8);
    minpq.push(1);
    minpq.push(5);

    cout<<minpq.top()<<endl;
    minpq.pop();
    cout<<minpq.top()<<endl;
    cout<<endl;



    return 0;
}