#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            if((i==0)|| (i==4) ||(j==0) || (j==i)){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}