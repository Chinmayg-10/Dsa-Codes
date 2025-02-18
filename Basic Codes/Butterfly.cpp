#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int cond= i<n ? i : n-i+4;
        int space_count=i<n? (2*n-2*cond-2): 2*i-2*n ;
        for(int j=0;j<2*n;j++){
                if(j<=cond)
                    cout<<"*";
                else if(space_count>0){
                    cout<<" ";
                    space_count--;
                }
             
                else{
                cout<<"*";
                }
        }
        cout<<endl;
    }
}