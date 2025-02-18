#include<iostream>
using namespace std;
void PrintArray(int arr[],int n){
    if(n==0){
        return;
    }
    
    PrintArray(arr,n-1);
    cout<<arr[n-1]<<" ";

}
int main(){
    int arr[]={3,6,9,12,15,78,90};
    int size=7;
    PrintArray(arr,size);


}