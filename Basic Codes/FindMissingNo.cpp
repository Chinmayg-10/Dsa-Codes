#include<iostream>
using namespace std;
int missingNo(int arr[],int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1]*=-1;

        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
    
}
int main(){
    int arr[5]={1,3,5,3,4};
    int size=6;
    missingNo(arr,size);

}