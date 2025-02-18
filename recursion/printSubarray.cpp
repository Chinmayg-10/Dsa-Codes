#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>&array,int i,int j){
    //base case
    if(i==array.size()){
        return;
    }
    if(j==array.size()){
        j=i;
        i++;
    }
    //1 case
    for(int k=i;k<=j;k++){
        cout<<array[k]<<" ";
    }
    cout<<endl;

    //recursion case
    solve(array,i,j+1);

}
int main(){
    vector<int>array{1,2,3,4,5};
    int initialPointer=0;
    int FinalPointer=0;
    solve(array,initialPointer,FinalPointer);
}