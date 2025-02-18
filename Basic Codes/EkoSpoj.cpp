#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool IsPossible(vector<long long int>trees,long long int m,long long int mid){
    long long int woodCollected=0;
    for(int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected+=trees[i]-mid;
        }
    }
    return woodCollected>=m;
}
long long int maxHeightOfSawBlade(vector<long long int>trees,long long int m){
    long long int s=0;
    long long int e=*max(trees.begin(),trees.end());
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        if(IsPossible(trees,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    long long int n,m;
    cin>>n>>m;
    vector<long long int>trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    cout<<maxHeightOfSawBlade(trees,m);

}