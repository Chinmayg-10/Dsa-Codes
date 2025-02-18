#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    //attributes
    int id;
    int age;
    string name;
    int* nos;

    

    //default constructor
    // Student(){

    // }

    //parametrised constructor
    Student(int id,int age,string name,int nos){
        cout<<"constructor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=new int(nos);
    }
    //copy constructor
    Student(const Student &srcobj){
        cout<<"copy constructor called"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }

    //destructor
    ~Student(){
        cout<<"destructor called"<<endl;
        delete this->nos;
    }

    //behaviour/Functions
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    void study(){
        cout<<"studying"<<endl;
    }
};
int main(){
    Student s1(1,23,"baba",8);
    Student s2(2,23,"ramji",7);
    s1.sleep();
    s1.study();
    Student s3=s1;
}