#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void ReverseInK(queue<int>&q,int k,int count){
    stack<int>st;
    if(count>=k){
        //k element queue se uthao aur stack me dall do
        for(int i=0;i<k;i++){
            int Element=q.front();
            q.pop();

            st.push(Element);
        }

        //stack ke elements ko queue ke end me push karo
        for(int i=0;i<k;i++){
            int Element=st.top();
            st.pop();

            q.push(Element);
        }
        //1 case solve kar diya bakki recursion ko dekhne do
        ReverseInK(q,k,count-k);
    }
    else{
        for(int i=0;i<count;i++){
            int Element=q.front();
            q.pop();

            q.push(Element);
        }
        
    }

}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);
    q.push(120);
    q.push(130);
    q.push(140);
    int k=3;
    int count=q.size();
    //it tracks the number of elements remaining to reverse

    ReverseInK(q,k,count);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


}