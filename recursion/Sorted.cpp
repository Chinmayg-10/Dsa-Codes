#include<iostream>
using namespace std;
bool Sorted(int arr[],int n,int index){
    if(index==n){
        return true;
    }
    if(arr[index]>arr[index+1]){
        return false;
    }
    Sorted(arr,n,index+1);
}
int main(){
    int arr[]={10,20,30,40,45,50};
    int size=6;
    int index=0;
    int ans=Sorted(arr,size,index);
    cout<<ans;

}