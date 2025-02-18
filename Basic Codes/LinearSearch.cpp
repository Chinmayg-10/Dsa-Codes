#include<iostream>
using namespace std;
bool FindTarget(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;

}
int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
    int target=40;
   if( FindTarget(arr,size,target)){
        cout<<"target is found"<<endl;
   }
   else{
    cout<<"target is not found"<<endl;
   }
}