#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    int* p=a++; // because a is a const pointer, it cannot change its value//
    cout<<*p<<endl;
}