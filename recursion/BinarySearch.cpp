#include<iostream>
using namespace std;
int Search(int arr[],int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        Search(arr,s,mid-1,k);
    }
    else{
        Search(arr,mid+1,e,k);
    }
}
int main(){
    int arr[]={10,11,12,13,14,15};
    int size=6;
    int target=14;
    int s=0;
    int e=size-1;
    int ans=Search(arr,s,e,target);
    cout<<ans;

}