#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if((i==0) || (i==4) || (j==0)|| (j==4-i)){
                cout<<i+1+j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}