#include<iostream>
using namespace std;
void repeatingElement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<i+1<<endl;
                return; // IT WILL EXIT THE FUNCTION
            }
            
        }
    }

}
int main(){
    int arr[6]={1,3,5,6,4,5};
    int size=6;
    repeatingElement(arr,size);
    

}