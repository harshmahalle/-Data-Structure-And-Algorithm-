#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;

//address of operator-&
cout<<"address of num is "<<&num<<endl;

int *ptr=&num;
cout<<"address is :"<<ptr<<endl;//for address
cout<<"value is :"<<*ptr<<endl;//for value

double d=4.2;
double *ptr1=&d;
cout<<"address is :"<<ptr1<<endl;//for address
cout<<"value is :"<<*ptr1<<endl;//for value

char ch='h';
char *ptr2=&ch;
cout<<"address is :"<<ptr2<<endl;//for address
cout<<"value is :"<<*ptr2<<endl;//for value

cout<<"size of integer is :"<<sizeof(num)<<endl;
cout<<"size of double is :"<<sizeof(d)<<endl;
cout<<"size of char is :"<<sizeof(ch)<<endl;

cout<<"size of pointer is :"<<sizeof(ptr)<<endl;
cout<<"size of pointer is :"<<sizeof(ptr1)<<endl;
cout<<"size of pointer is :"<<sizeof(ptr2)<<endl;

//pointr to int is created,and pointing to some garbage address
//int *p=0;
//cout<<*p<<endl;
/*
int i=5;


int *q=&i;
cout<<q<<endl;
cout<<*q<<endl;

int *p=0;
p=&i;
cout<<p<<endl;
cout<<*p<<endl;

*/
/*
int num=5;
int a=num;
cout<<"a before :"<<num<<endl;
a++;
cout<<"a after :"<<num<<endl;

int *p=&num;
cout<<" before :"<<num<<endl;
(*p)++;
cout<<" after :"<<num<<endl;

//copying a pointer
int *q=p;
cout<<p<<"-"<<q<<endl;
cout<<*p<<"-"<<*q<<endl;

//imp arithmatic pointer operation
int i=3;
int *t=&i;
//cout<<(*t)++<<endl;
*t=*t+1;
cout<<*t<<endl;

cout<<"before t"<<t<<endl;
t=t+1;
cout<<"after t"<<t<<endl;
*/
return 0;

}