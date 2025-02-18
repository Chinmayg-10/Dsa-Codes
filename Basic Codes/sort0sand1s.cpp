#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int i=0;
    int j=n-1;
    if(arr[i]==0){
        i++;
    }
    if(arr[j]==1){
        j--;
    }
    if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[7]={0,1,0,0,1,1,0};
    int size=7;
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}