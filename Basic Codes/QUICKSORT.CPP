#include<iostream>
using namespace std;
void quicksort(int arr[],int s,int e){
    int i=s-1;
    int j=s;
    int pivot=e;
    if(s>=e){
        return;
    }
    while(j<=pivot){
        if(arr[j]>=arr[pivot]){
            j++;
        }
        else{
            i++;
            swap(arr[i],arr[j]);
            j++;
        }
    }
    i++;
    swap(arr[i],arr[pivot]);
    //now left side and right side recursion call

    quicksort(arr,s,pivot-1);
    quicksort(arr,pivot+1,e);
}
int main(){
    int arr[]={7,2,1,8,6,3,5,4};
    int size=8;
    int s=0;
    int e=size-1;
    quicksort(arr,s,e);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}