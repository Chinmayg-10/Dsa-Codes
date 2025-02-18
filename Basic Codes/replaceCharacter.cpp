#include<iostream>
using namespace std;
int main(){
    char content[50];
    cin>>content;

    int index=0;
    while(content[index]!='\0'){
        if(content[index]=='@'){
            content[index]=' ';
            index++;
        }
        else{
            index++;
        }
    }
    cout<<content;
    
}