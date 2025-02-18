#include<iostream>
using namespace std;
int minimum(int arr[][4],int r,int c){
    int min=INT16_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;


}
int main(){
    int arr[3][4]={
        {10,11,12,13},
        {21,22,23,24},{
            43,44,45,46
        }
    };
    int rowsize=3;
    int colsize=4;
    int min=minimum(arr,rowsize,colsize);
    cout<<min<<endl;
    

}