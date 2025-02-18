#include<iostream>
using namespace std;
void MoveNegativeNo(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>=0){
            j--;
        }
        else if(arr[i]>=0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
int main(){
    int arr[6]={0,-5,-6,4,6,-3};
    int size=6;
    MoveNegativeNo(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

    
}