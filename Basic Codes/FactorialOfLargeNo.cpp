#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 void Factorial(int n){
        vector<int>ans;
        ans.push_back(1);
        int carry=0;
        for(int i=2;i<=n;i++){
            for(int j=0;j<ans.size();j++){
                int x=ans[j]*i+carry;
                ans[j]=x%10;
                carry=x/10;
            }
            while(carry){
                // because carry contain multiple digits
                ans.push_back(carry%10);
                carry/=10;
            }
            carry=0;
            
        }
        reverse(ans.begin(),ans.end());
        for(int a: ans){
            cout<<a<<" ";
        }
}
int main(){
    int n;
    cout<<"enter the number as large as possible whose factorial has to be found"<<endl;
    cin>>n;
    Factorial(n);
}