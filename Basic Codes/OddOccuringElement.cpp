#include<iostream>
using namespace std;
int OddOccuring(int arr[],int size){
    int s=0;
    int e=size-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e){
            // start, end,mid at same index
            return s;
        }
        int leftValue=-1;
        int rightValue=-1;
        int currentvalue=arr[mid];
        if(mid-1>=0){
            leftValue=arr[mid-1];
        }
        if(mid+1<size){
            rightValue=arr[mid+1];
        }
        // duplicate does not exist
        if(currentvalue!=leftValue && currentvalue!=rightValue){
            return mid;
        }
        // duplicate exist on left side
        if(currentvalue==leftValue && mid-1>=0){
            int pairIndex=mid-1;
            if(pairIndex&1){
                // odd index
                //ans on left side
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        if(currentvalue==rightValue && mid+1<size){
            int pairIndex=mid;
            if(pairIndex&1){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5};
    int size=9;
    int ans=OddOccuring(arr,size);
    cout<<ans<<endl;
}