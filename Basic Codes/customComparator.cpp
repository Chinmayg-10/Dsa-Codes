#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// bool mycomp(int& a,int& b){
//     return a>b;
// }
bool compfor1stIndex(vector<int>&a ,vector<int>&b){
    return a[1]<b[1];
}
int main(){

    // vector<int>v={40,60,30,20,80};
    // sort(v.begin(),v.end(),mycomp);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    vector<vector<int>>v;
    int n;
    cout<<"enter size of vector"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);

        sort(v.begin(),v.end(),compfor1stIndex);

    }

    for(int i=0;i<n;i++){
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        vector<int>&temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<endl;
    }

}