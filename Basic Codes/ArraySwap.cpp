#include<iostream>
using namespace std;
void swap(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[6]={78,56,98,1045,10,50};
    int size=6;
    swap(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}