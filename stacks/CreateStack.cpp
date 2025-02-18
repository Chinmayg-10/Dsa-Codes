#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top;

    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top=top+1;
        arr[top]=value;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        arr[top]=-1;
        top=top-1;
    }
    int getsize(){
        size=top+1;
        return size;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int peek(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    void print(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"printing stack"<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    //creating a stack of size 5
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();
    s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    s.print();
    cout<<s.getsize()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.peek()<<endl;
}
