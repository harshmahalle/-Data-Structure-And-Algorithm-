#include<iostream>
using namespace std;

class Animal{
      public:
      int age;
      int weight;

      public:
      void speak(){
        cout<<"sleeping"<<endl;
      }
};

class Dog:public Animal{

};

class Germanshepard:public Dog{

};

int main(){
    Germanshepard g;
    g.speak();
    return 0;
}