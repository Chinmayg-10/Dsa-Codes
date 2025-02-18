#include<Iostream>
using namespace std;
class  Shape {
    public:
    virtual void draw(){
        cout<<"generic Drawing..."<<endl;
    }
    
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Circle Drawing"<<endl;
    }
    
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"rectangle Drawing"<<endl;
    }
    
};
class Triangle:public Shape{
    public:
    void draw(){
        cout<<"triangle Drawing"<<endl;
    }
    
};

//Outside Class
void ShapeDrawing(Shape *s){
    s->draw();
}
int main(){
    Circle c;
    Rectangle r;
    ShapeDrawing(&c);
    ShapeDrawing(&r);
    Triangle *t=new Triangle();
    ShapeDrawing(t);

    //W/o virtual keyword
    // Shape *s=new Shape();
    // s->draw();

    // //UPCASTING
    // Shape *s1=new Circle();
    // s1->draw();
    // Circle *s2=new Circle();
    // s2->draw();

    // //DOWNCASTING
    // Shape *s3=new Shape();
    // Circle *c2=(Circle *)s3;
    // c2->draw();

    return 0;

    


}