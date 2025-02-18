#include<iostream>
using namespace std;
int FindQuotient(int dividend,int divisor){
    int s=-(dividend);
    int e=dividend;
    int mid=(s+e)/2;
    while(s<e){
        if(divisor*mid>dividend){
            e=mid-1;
        }
        else if(divisor*mid<=dividend){
            s=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main(){
    int dividend=11;
    int divisor=2;
    cout<<FindQuotient(dividend,divisor)<<endl;
}