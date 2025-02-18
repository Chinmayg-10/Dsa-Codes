#include<iostream>
#include<queue>
using namespace std;
int main(){
    //doubly ended queue
    deque<int>dq;
    //insertion
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(40);
    dq.push_front(50);
    dq.push_back(30);
    dq.push_back(100);

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
    // while(!dq.empty()){
    //     cout<<dq.front()<<" ";
    //     dq.pop_front();
    // }
    // cout<<endl;

    //deletion
    dq.pop_front();
    cout<<dq.front()<<endl;
    



}