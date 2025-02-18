#include<iostream>
using namespace std;
void RotateArray(int arr[],int size,int shift){
    int finalshift=shift%size;
    int temp[1000];
    int index=0;
    for(int i=size-finalshift;i<size;i++){
        temp[index++]=arr[i];
    }
    for(int i=size-1;i>=0;i--){
        if(i-finalshift>=0){
            arr[i]=arr[i-finalshift];

        }
        
    }
    for(int i=0;i<finalshift;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    int shift=0;
    RotateArray(arr,size,shift);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
