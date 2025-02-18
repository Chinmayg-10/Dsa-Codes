#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void Reverse(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        int Element=q.front();
        q.pop();

        st.push(Element);
    }
    // now retrieve data from stack
    while(!st.empty()){
        int Element=st.top();
        st.pop();

        q.push(Element);
    }
}
void ReverseRec(queue<int>&q){
    //base case
    if(q.empty()){
        return;
    }
    int Element=q.front();
    q.pop();

    //now recursion
    ReverseRec(q);

    //after getting empty now insert
    //backtracking
    q.push(Element);
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // Reverse(q);
    ReverseRec(q);

    //now print the queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}