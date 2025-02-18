#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void solve(stack<int>& s,vector<int>& v,vector<int>& ans){
    int n=v.size();
    for(int i=n-1;i>=0;i--){
        int Element=v[i];

        while(s.top()>=Element){
            s.pop();
        }
        // agr top, element se choota hai
        ans.push_back(s.top());
        s.push(Element);
    }
}
int main(){
    //input
    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    stack<int>s;
    s.push(-1);
    vector<int>ans;

    solve(s,v,ans);
    reverse(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;

}