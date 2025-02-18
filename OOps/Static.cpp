// #include<iostream>
// using namespace std;
// class abc{
//     public:
//     static int x,y;

//     void show() const{
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int abc::x;
// int abc::y;
// int main(){
//     abc obj1;
//     obj1.x=2;
//     obj1.y=4;
//     obj1.show();
//     abc obj2;
//     obj2.x=10;
//     obj2.y=20;
//     obj1.show();
//     obj2.show();

// }

#include<iostream>
using namespace std;
class abc{
    public:
    int x,y;

    abc(){
        x=0;
        y=0;
    }

    static void show(){
        printf("i am inside static function %s\n", __FUNCTION__);
    }
};
int main(){
    abc obj1;
    abc::show();
    abc obj2;
    abc::show();
    abc::show();

}
