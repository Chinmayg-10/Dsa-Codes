#include<iostream>
using namespace std;
int DiagonalSum(int arr[][4],int r,int c){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    return sum;


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
    int sum=DiagonalSum(arr,rowsize,colsize);
    cout<<sum<<endl;
    

}