#include<iostream>
using namespace std;
class Box{
    int width;
    Box(int w):width(w){};

    public:
    //ctor
    
    int getter() const{
        return width;
    }
    void setter(int w){
        width=w;
    }
    friend class BoxFactory;
};
class BoxFactory{
    int count;
    public:
    Box getAbox(int w){
        return Box(w);
    }

};
int main(){
    BoxFactory bfact;
    Box b=bfact.getAbox(7);
    cout<<b.getter()<<endl;
}