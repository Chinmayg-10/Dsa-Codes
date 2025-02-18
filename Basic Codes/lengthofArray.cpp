#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter name:"<<endl;
    cin>>name;
    int count=0;
    int index=0;
    // while(name[index]!='\0'){
    //     count++;
    //     index++;
    // }
    for(int i=0;i<20;i++){
        if(name[i]=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
}