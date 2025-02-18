#include<iostream>
using namespace std;
void CommonElement(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3){
    int i,j,k;
    i=j=k=0;
    while(i<n1 && j<n2 && k<n3){
        if((arr1[i]==arr2[j]) &&(arr2[j]==arr3[k])){
            cout<<arr1[i]<<" ";
            i++,j++,k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}
int main(){
    int arr1[6]={1,5,10,20,40,80};
    int n1=6;
    int arr2[5]={6,7,20,80,100};
    int n2=5;
    int arr3[8]={3,4,15,20,30,70,80,120};
    int n3=8;
    CommonElement(arr1,n1,arr2,n2,arr3,n3);

}