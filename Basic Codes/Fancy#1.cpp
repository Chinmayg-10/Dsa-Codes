#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start_index=8-i;
        int num=i+1;
        int count=num;
        for(int j=0;j<17;j++){
            if(j==start_index && count>0){
                cout<<num;
                start_index+=2;
                count--;
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
}