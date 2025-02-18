#include<iostream>
using namespace std;
bool solve(string input,int i,int j){
    //base case
    if(i>j){
        return true;
    }

    if(input[i]==input[j]){
        return solve(input,i+1,j-1);
    }

    return false;
    
}
int main(){
    string input="racecar";
    int i=0;
    int j=input.length()-1;
    bool ans=solve(input,i,j);
    cout<<ans<<endl;


}