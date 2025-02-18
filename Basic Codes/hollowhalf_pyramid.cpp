#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==2 || i==10){
                cout<<"*";
            }
            else{
                if(j==1 || j==i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}