#include<iostream>
using namespace std;
int binarySeach(int arr[],int s,int e,int x){
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int expSearch(int arr[],int n,int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    return binarySeach(arr,i/2,min(i,n-1),x);

}
int main(){
    int arr[]={3,4,5,6,11,13,14,56,70};
    int n=9;
    int x=70;
    int ans=expSearch(arr,n,x);
    cout<<ans<<endl;
}