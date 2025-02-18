#include<iostream>
using namespace std;
int maxnumber(int arr[],int size){
    int ans=INT16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;

}
int main(){
    int arr[4]={78,56,98,1045};
    int size=4;
    cout<<"max number in an array is:"<<maxnumber(arr,size)<<endl;

}