#include<iostream>
using namespace std;
void PrintOdd(int arr[],int n,int index){
    if(index==n){
        return;
    }
    if(arr[index]%2!=0){
        cout<<arr[index]<<" ";
    }
    PrintOdd(arr,n,index+1);
}
int main(){
    int arr[]={10,11,17,13,14,15};
    int size=6;
    PrintOdd(arr,size,0);

}