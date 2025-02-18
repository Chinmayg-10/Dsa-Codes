#include<iostream>
using namespace std;
int main(){
    int a=2;
    //pointer
    int* p=0;
    p=&a;
    cout<<p<<endl;

    //refernce variable
    int &b=a;
    cout<<b;

}