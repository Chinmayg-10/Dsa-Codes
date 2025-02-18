#include<iostream>
using namespace std;
void extremeprint(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;


        }
        
    }
}
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    int size=7;
    extremeprint(arr,size);

}