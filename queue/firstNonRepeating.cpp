#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;
string firstNonRepeating(string A){
    unordered_map<char,int>freq;
    string ans="";
    queue<char>q;
    for(int i=0;i<A.length();i++){
        char ch=A[i];
        freq[ch]++;
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front()]==1){
                ans.push_back(q.front());
                break;
            }
            else{
                q.pop();
            }

        }
        if(q.empty()){
            ans.push_back('#');
        }

    }
    return ans;


}
int main(){
    string st="aabcd";
    cout<<firstNonRepeating(st)<<endl;
}