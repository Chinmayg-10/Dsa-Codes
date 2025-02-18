#include<iostream>
using namespace std;
void junk(int* i,int* j){
    *i=(*i) * (*i);
    *j=(*j) * (*j);
    cout<<i<<" "<<j;
}
int main(){
    int i=5;
    int j=2;
    junk(&i,&j);
}