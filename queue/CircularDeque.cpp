#include<iostream>
using namespace std;
class CircularDeque{
    int *arr;
    int n;
    int front;
    int rear;
    public:
    CircularDeque(int size){
        n=size;
        arr=new int [size];
        front=-1;
        rear=-1;
    }
    void pushFront(int val){
        if((front==0 && rear==n-1) || rear==front-1){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
        }
        else if(front==0 && rear!=n-1){
            front=n-1;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }
    }
    void pushBack(int val){
        if((front==0 && rear==n-1) || rear==front-1){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else if(rear==n-1 && front!=0){
            rear=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void popFront(){
        if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==n-1){
            arr[front]=-1;
            front=0;


        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void popBack(){
        if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[rear]=-1;
            rear=-1;
            front=-1;
        }
        else if(rear==0){
            arr[rear]=-1;
            rear=n-1;
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
    CircularDeque cqd(6);
    cqd.pushBack(10);
    cqd.pushBack(20);
    cqd.pushFront(11);
    cqd.pushFront(12);
    cqd.pushFront(13);
    cqd.pushFront(14);
    cqd.pushBack(50);
    cqd.popBack();
    cqd.popFront();
    cqd.print();
    

}