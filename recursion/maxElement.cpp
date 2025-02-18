
#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void maxElement(int arr[],int n,int index,int &maxi){
    
    if(index==n){
        return;
    }
    maxi=max(maxi,arr[index]);
    maxElement(arr,n,index+1,maxi);
    
    
}
int main(){
    int arr[]={3,6,9,12,15,95,90};
    int size=7;
    int maxi=INT32_MIN;
    maxElement(arr,size,0, maxi);
    cout<<maxi;
    
    
}