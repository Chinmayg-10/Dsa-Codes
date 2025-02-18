#include<iostream>
#include<algorithm>
using namespace std;
// void printPermutation(string str,int i){
//     //base case
//     if(i>=str.length()){
//         cout<<str<<endl;
//         return;
//     }
//     for(int j=i;j<str.length();j++){
//         swap(str[i],str[j]);
//         printPermutation(str,i+1);
//            swap(str[i],str[j]);
//     }

// }

// for passing string with reference
// void printPermutation(string &str,int i){
//     //base case
//     if(i>=str.length()){
//         cout<<str<<endl;
//         return;
//     }
//     for(int j=i;j<str.length();j++){
//         swap(str[i],str[j]);
//         printPermutation(str,i+1);
//         //backtracking
//         swap(str[i],str[j]);
//     }

// }

void PermuteSTL(string s){
    sort(s.begin(),s.end());
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }
}
int main(){
    string str="cba";
    // int i=0;
    // printPermutation(str,i);
    PermuteSTL(str);

}