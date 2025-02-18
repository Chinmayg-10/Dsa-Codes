#include<iostream>
using namespace std;
int main(){
    int NoOfdigits;
    cin>>NoOfdigits;
    int num=0;
    for(int i=0;i<NoOfdigits;i++){
        cout<<"enter digit :"<<endl;
        int digit;
        cin>>digit;
        num=num*10+digit;
    }
    cout<<"Final Number is Equal to"<<num<<endl;
}