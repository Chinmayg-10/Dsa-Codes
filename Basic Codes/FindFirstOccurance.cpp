#include<iostream>
using namespace std;
void FindFirstOccurance(int arr[],int n,int &ansIndex,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid; //Only store the value

            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

}
int main(){
    int arr[]={10,20,20,30,50,70,79,90};
    int size=8;
    int target=20;
    int ansIndex=-1;
    FindFirstOccurance(arr,size,ansIndex,target);
    cout<<ansIndex<<endl;

}