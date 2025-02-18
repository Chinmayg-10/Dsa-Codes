#include<iostream>
#include<string>
using namespace std;
class Vehicles{
    protected:
    string name;
    string model;
    int NoOfTyres;

    // string getName() const{
    //     return this->name;
    // }
    public:
    Vehicles(string name,string model,int NoOfTyres){
        // cout<<"I am inside Vehicle Ctor"<<endl;
        cout<<__FUNCTION__<<endl;
        this->name=name;
        this->model=model;
        this->NoOfTyres=NoOfTyres;
    }
    
    void start_engine(){
        cout<<"Engine is  Starting"<<name<<" "<<model;
    }
    void stop_engine(){
        cout<<"Engine is Stopping"<<name<<" "<<model;
    }

};
class Car : public Vehicles{
    protected:
    int NoOfDoors;
    string TransmissionType;

    public:
    Car(int NoOfDoors,string TransmissionType,string name,string model,int NoOfTyres):Vehicles(name,model,NoOfTyres){
        // cout<<"I am inside Car Ctor"<<endl;
        cout<<__FUNCTION__<<endl;
        this->NoOfDoors=NoOfDoors;
        this->TransmissionType=TransmissionType;
    } 

    void start_AC(){
        cout<<"AC has Started of"<<" "<<name<<endl;
    }

};
 

int main(){
    Car A(4,"automatic","Creta","VLX",4);
    A.start_AC();
    A.start_engine();
    
}