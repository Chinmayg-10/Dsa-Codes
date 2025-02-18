#include<iostream>
#include<vector>
using namespace std;
void MergeTwoSorted(int arr[],int n1,int brr[],int n2,vector<int> &ans){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr[i]<arr[j]){
            ans.push_back(arr[i]);
            i++; 
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    while(i<n1){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<n2){
        ans.push_back(brr[j]);
        j++;
    }
    
}

int main(){
    int arr[]={20,40,60,80,90,100};
    int size1=6;
    int brr[]={10,30,50,70};
    int size2=4;
    vector<int>ans;
    MergeTwoSorted(arr,size1,brr,size2,ans);
    for(int num:ans){
        cout<<num<<" ";
    }
}