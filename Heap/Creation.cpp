#include<iostream>
using namespace std;

class heap{
    public:
    int* arr;
    int capacity;
    int index;

    //constructor
    heap(int n){
        this->capacity=n;
        arr=new int[n];
        index=0;
        //jab bhi mujhe array me data insert karni ho toh index++ karke insert hogi
    }
    void printHeap(){
        for(int i=1;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void insert(int val){
        if(index==capacity){
            cout<<"Overflow"<<endl;
            return;
        }
        index++;
        arr[index]=val;
        //now put the value at right position
        //by comparing with parent node

        //original index ki value update nhi karni hai
        int i=index;
        while(i>1){
            int parentIdx=i/2;
            if(arr[parentIdx]<arr[i]){
                swap(arr[parentIdx],arr[i]);
                i=parentIdx;
            }
            else{
                //agar parent bada hai toh kuch nhi karna hai
                break;
            }

        }
    }
    void Delete(){
        //Replacement
        swap(arr[1],arr[index]);
        //size decrease
        index--;
        //Heapify
        // heapify(arr,index,1);
    }
};
void heapify(int* arr,int n,int currIdx){
    int i=currIdx;
    int leftIdx=2*i;
    int rightIdx=2*i+1;

    //let us suppose largestValIdx=i;
    int largestValIdx=i;

    //check for left
    if(leftIdx<n && arr[leftIdx]>arr[largestValIdx]){
        //left mai badi value mil gayi
        largestValIdx=leftIdx;
    }
    //check for right
    if(rightIdx<n && arr[rightIdx]>arr[largestValIdx]){
        largestValIdx=rightIdx;
    }
    //if largestval index is other than i then, you need to swap
    if(largestValIdx!=i){
        swap(arr[i],arr[largestValIdx]);
        i=largestValIdx;
        //Bakki recursion sambhal lega
        heapify(arr,n,i);
    }
}
void buildHeap(int* arr,int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
void HeapSort(int* arr,int n){
    
    while(n!=1){
        //Delete operation perform hoga n-1 baar to sort the complete array
        swap(arr[1],arr[n-1]);
        //delete last element
        n--;
        //heapify 1 wala index element
        heapify(arr,n,1);
    }
}
int main(){
    int arr[]={-1,10,20,30,40,50};
    int n=6;
    buildHeap(arr,n);
    HeapSort(arr,n);
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // heap pq(6);
    // pq.insert(10);
    // pq.insert(20);
    // pq.insert(30);
    // pq.insert(40);
    // pq.insert(50);
    // pq.printHeap();
    // pq.Delete();
    // pq.printHeap();
    return 0;

}