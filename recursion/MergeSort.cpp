#include<iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){
    int leftLength=mid-s+1;
    int rightLength=e-mid;

    //created two empty arrays
    int *leftArray=new int[leftLength];
    int *rightArray=new int[rightLength];

    //fill or copy the left and right array
    //copy original array ->values
    //original array ka starting index

    int index=s;

    //copying from left wala array
    for(int i=0;i<leftLength;i++){
        leftArray[i]=arr[index];
        index++;
    }
    //copying from right wala array
    for(int j=0;j<rightLength;j++){
        rightArray[j]=arr[index];
        index++;
    }

    //merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;

    while(leftIndex<leftLength && rightIndex<rightLength){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[mainArrayIndex]=leftArray[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=rightArray[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }
    while(leftIndex<leftLength){
            arr[mainArrayIndex]=leftArray[leftIndex];
            leftIndex++;
            mainArrayIndex++;
    }
    while (rightIndex<rightLength)
    {
            arr[mainArrayIndex]=rightArray[rightIndex];
            rightIndex++;
            mainArrayIndex++;
    }

    //delete heap memory
    delete[] leftArray;
    delete[] rightArray;
    
}
void mergeSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    // left part ko recursion se solve karao
    mergeSort(arr,s,mid);

    //right part ko recursion se solve karao
    mergeSort(arr,mid+1,e);
    //dono sorted arrays ko merge karo
    merge(arr,s,e,mid);
}
int main(){
    int arr[]={10,50,70,20,50,40,30};
    int size=7; 
    int s=0;
    int e=size-1;
    mergeSort(arr,s,e);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
    