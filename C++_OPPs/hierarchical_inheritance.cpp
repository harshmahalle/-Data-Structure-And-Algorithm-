#include<iostream>
using namespace std;

//hierarchical inheritance

class A {

    public:
    void fun1(){
        cout<<"inside function 1:"<<endl;
    }
};

class B:public A  {

    public:
    void fun2(){
        cout<<"inside function 2:"<<endl;
    }
};

class C:public A {

    public:
    void fun3(){
        cout<<"inside function 3:"<<endl;
    }
};

int main(){

    A object1;
    object1.fun1();

    B object2;
    object2.fun1();
    object2.fun2();

    C object3;
    object3.fun1();
    object3.fun3();

    return 0;
}