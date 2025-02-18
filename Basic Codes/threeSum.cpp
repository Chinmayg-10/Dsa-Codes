#include<iostream>
#include<vector>
using namespace std;
void ThreeSum(vector<int>& v,vector<int>& ans,int target){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==target){
                    ans.push_back(v[i]);
                    ans.push_back(v[j]);
                    ans.push_back(v[k]);
                }
            }
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    int target=70;

    vector<int>ans;
    ThreeSum(v,ans,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}