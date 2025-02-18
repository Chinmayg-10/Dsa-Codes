#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int i=0;i<7;i++){
        for(int j=0;j<i+1;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}