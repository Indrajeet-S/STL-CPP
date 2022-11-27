#include<bits/stdc++.h>
using namespace std;

int main() {

    // stack and queue

    cout<<"Stack"<<endl;
    // STACK
    // IMP operations
    // TC -> O(1), constant time  
    // push or emplace
    // pop 
    // top
    // size 
    // empty

    stack<int> st; // LIFO ds (Last In First Out Data Structure)
    st.push(22);
    st.push(3);
    st.emplace(98);
    st.push(15);

    cout<<st.top()<<endl; // element at the top of the stack
    st.pop();
    // best practise
    if(!st.empty())  cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    // clear the entire stack... st.clear() method is not present
    // following method is used to delete all elements of the stack
    // O(n) -> n is the size of stack
    while(!st.empty()){
        st.pop();
    }
    cout<<st.size()<<endl; // number of elements in the stack
    cout<<endl;



    cout<<"Queue"<<endl;
    // QUEUE -> FIFO operation Data Structure (First In First Out)
    // TC -> O(1), constant time 
    // push
    // pop
    // front
    // size
    // empty
    queue<int> q;
    q.push(2);
    q.push(62);
    q.push(55);
    q.push(3);
    
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    // delete all the elements of the queue
    // deletion takes O(n) -> n is size of queue 
    while(!q.empty()) q.pop();
    cout<<q.size()<<endl;

    // No iterator in stack and queue
 



    return 0;
}