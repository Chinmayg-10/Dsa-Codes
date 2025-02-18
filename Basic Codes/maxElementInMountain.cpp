#include<iostream>
using namespace std;
int maxElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main(){
    int arr[]={10,20,30,70,60,50,40};
    int size=7;
    int ans=arr[maxElement(arr,size)];
    cout<<ans;

}