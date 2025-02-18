#include<iostream>
using namespace std;
class Complex{
    public:
    int r;
    int i;
    //default Constructor
    Complex(){
        r=i=-1;
    }
    //constructor
    Complex(int r,int i){
        this->r=r;
        this->i=i;
    }

    //Operator Overloading
    Complex operator+(const Complex &Obj) {

    Complex temp;  // Temporary object to hold the result
    temp.r = this->r + Obj.r;  // Adding real parts of both complex numbers
    temp.i = this->i + Obj.i;  // Adding imaginary parts of both complex numbers
    return temp;  // Return the result
    }
    Complex operator-(const Complex &Obj) {

    Complex temp;  
    temp.r = this->r - Obj.r;  
    temp.i = this->i - Obj.i;  
    return temp;  
    }

    bool operator==(const Complex &Obj){
        return (this->r==Obj.r)&&(this->i==Obj.i);
    }


    void Print(){
        cout<<this->r<<"+ i"<<this->i<<endl;
    }


};
int main(){
    Complex c1(2,5);
    Complex c2(5,8);
    c1.Print();
    c2.Print();
    // Complex C=c1+c2;
    // Complex C=c1-c2;
    bool a=c1==c2;
    cout<<a<<endl;
    // C.Print();
    
}