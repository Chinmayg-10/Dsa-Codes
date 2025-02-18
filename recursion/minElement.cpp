#include<iostream>
using namespace std;
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
void minElement(int arr[],int n,int index,int &mini){
    
    if(index==n){
        return;
    }
    mini=min(mini,arr[index]);
    minElement(arr,n,index+1,mini);
    
    
}
int main(){
    int arr[]={3,6,9,12,15,95,90};
    int size=7;
    int mini=INT32_MAX;
    minElement(arr,size,0, mini);
    cout<<mini;
    
    
}