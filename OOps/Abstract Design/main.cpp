#include<iostream>
#include"bird.h"
using namespace std;

void birdDoesSomething(Bird *&bird){
    bird->fly();
    bird->fly();
    bird->eat();
}
int main(){
    Bird *bird=new sparrow();
    birdDoesSomething(bird);
    Bird *bird2=new Eagle();
    birdDoesSomething(bird2);
    return 0;
}