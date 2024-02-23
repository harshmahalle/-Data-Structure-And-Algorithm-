#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human{

    public:
    string colour;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

//muliple inheritance

class Hybrid: public Animal,public Human{
 
};

int main(){

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

     return 0;
}