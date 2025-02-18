#include<iostream>
using namespace std;
bool SearchInArray(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(arr[n-1]==k){
        return true;
    }
    SearchInArray(arr,n-1,k);
}
int main(){
    int arr[]={3,6,9,12,15,78,90};
    int size=7;
    int target=2;
    bool ans=SearchInArray(arr,size,target);
    cout<<ans<<endl;
}