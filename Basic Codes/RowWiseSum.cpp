#include<iostream>
using namespace std;
void rowWiseSum(int arr[][4],int r,int c){
    
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }


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
    rowWiseSum(arr,rowsize,colsize);
    

}