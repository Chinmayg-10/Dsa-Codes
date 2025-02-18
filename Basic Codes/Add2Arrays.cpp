#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ArraySum(int a[],int n1 , int b[],int n2 ){
    vector<int>ans;
    int i=n1-1;
    int j=n2-1;
    int carry=0;
    while(i>=0 && j>=0){
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        i--;j--;

    }
    while(i>=0){
        int x=a[i]+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        i--;
    }
    while(j>=0){
        int x=b[j]+carry;
        int digit=x%10;
        ans.push_back(digit);
        carry=x/10;
        j--;
    }
    if (carry){
        ans.push_back(carry);
    }
    reverse(ans.begin(),ans.end());
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<" ";
    }
    
}
int main(){
    int arr1[5]={1,4,6,9,3};
    int n1=5;
    int arr2[6]={9,5,3,8,2,3};
    int n2=6;
    ArraySum(arr1,n1,arr2,n2);
    
    

}