#include<iostream>
using namespace std;
int main(){
    // int* p=new int;
    // *p=5;
    // cout<<*p<<endl;

    // delete p;
    // cout<<*p<<endl;

    int* btr= new int[5]{0};
    cout<< btr[0] << btr[1] << btr[2] <<endl;


    //2D Array Heap Memory

    // 3-> column count
    // 4-> row count
    int** arr=new int*[4];
    for(int i=0;i<4;i++){
        arr[i]=new int[3];
    }

    for(int i=0;i<4;i++){
        delete[] arr[i];
    }


}