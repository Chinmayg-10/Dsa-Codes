#include<iostream>
#include<queue>
using namespace std;
class Deque{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Deque(int size){
        arr=new int[size];
        n=size;
        front=-1;
        rear=-1;
    }
    void pushFront(int val){
        if(front==0){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }
    }
    void pushBack(int val){
        if(rear==n-1){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            rear++;
            front++;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void popfront(){
        if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void popback(){
        if(rear==-1 && front==-1 ){
            cout<<"underflow"<<endl;
        }
        else if( front==rear){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[rear]=-1;
            rear--;
        }
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Deque dq(6);
    dq.pushFront(10);
    dq.pushFront(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.popback();
    dq.popfront();
    dq.print();
     
}