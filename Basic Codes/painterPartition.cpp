#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
    int boardsum=0;
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;

        }
        if(boardsum+arr[i]>mid){
            c++;
            boardsum=arr[i];

            if(c>k){
                return false;
            }
        }
        else{
            boardsum+=arr[i];
        }
        
    }
    return true;
}
int sum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arr[i];
    }
    return ans;
}
int minimumNoOfDays(int arr[],int n,int k){
    int s=0;
    int e=sum(arr,n);
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={5,10,30,20,15};
    int n=5;
    int NoOfPainters=3;
    int ans=minimumNoOfDays(arr,n,NoOfPainters);
    cout<<ans;

}