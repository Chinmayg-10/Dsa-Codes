#include<iostream>
using namespace std;
int lastOccurIndex(int size,int target,int &ansIndex,int arr[]){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;

            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ansIndex;
}
int firstOccurIndex(int size,int target,int &ansIndex,int arr[]){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;

            e=mid-1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ansIndex;
}

int main(){
    int arr[]={10,20,20,20,30,30,40};
    int size=7;
    int target=10;
    int ansIndex=-1;
    int lastOccur=lastOccurIndex(size,target,ansIndex,arr);
    int firstOccur=firstOccurIndex(size,target,ansIndex,arr);
    int TotalOccur=lastOccur-firstOccur+1;
    cout<<TotalOccur<<endl;

}