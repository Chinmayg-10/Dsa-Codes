#include<iostream>
using namespace std;
class CircularQueue{
    private:
    int *arr;
    int n;
    int front;
    int rear;

    public:
    CircularQueue(int size){
        arr=new int[size];
        n=size;
        front=-1;
        rear=-1;
    }
    void push(int val){
        //overflow cases
        if((front==0 && rear==n-1) || (rear+1==front)){
            cout<<"Overflow"<<endl;
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
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==n-1){
            //circular nature
            arr[front]=-1;
            front=0;

        }
        else{
            arr[front]=-1;
            front++;
        }

    }
    int getFront(){
        if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[front];

    }
    int getRear(){
        if(rear==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[rear];

    }
    int getSize(){
        if(front==-1 && rear==-1){
            return 0;
        }
        else if(rear>=front){
            return rear-front+1;
        }
        return n-front+rear+1;

    }
    bool empty(){
        if(front==-1 && rear==-1){
            return true;
        }
        return false;
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    CircularQueue cq(6);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.push(60);
    cq.pop();
    cq.push(100);
    cq.print();
    cout<<cq.getFront()<<endl;
    cout<<cq.getRear()<<endl;
    cq.pop();
    cout<<cq.getFront()<<endl;
    cout<<cq.getRear()<<endl;
    cq.pop();
    cout<<cq.getSize()<<endl;
}