#include<iostream>
using namespace std;
// more better method of insertion sort 
 void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={5,3,4,2,1};
    int size=5;
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}