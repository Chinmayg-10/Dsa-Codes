#include<iostream>
using namespace std;
int getlength(char arr[]){
    int index=0;
    int count=0;
    while(arr[index]!='\0'){
        index++;
        count++;
    }
    return count;
}
int main(){
    char arr[20];
    cin>>arr;
    int n=getlength(arr);
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            cout<<"false"<<endl;
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<"true"<<endl;

}