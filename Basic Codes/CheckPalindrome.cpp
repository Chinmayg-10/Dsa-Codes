#include<iostream>
using namespace std;
int getlength(char arr[]) {
    int count = 0;
    int index = 0;
    while (arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
}
bool checkPalindrome(char array[50],int length){
    int index=0;
    int end=length-1;
    while(index<=end){
        if(array[index]==array[end]){
            index++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;

}
int main(){
    char array[50];
    cin>>array;

    int length=getlength(array);
    if(checkPalindrome(array,length)){
        cout<<"valid palindrome"<<endl;
    }
    else{
        cout<<"invalid palindrome"<<endl;
    }
}