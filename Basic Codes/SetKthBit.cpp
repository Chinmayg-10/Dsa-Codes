#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int k;
    cout<<"enter the value k"<<endl;
    cin>>k;
    int numbertoadd=1<<k;
    int answer=n | numbertoadd;
    cout<<"the answer is"<<answer<<endl;
}