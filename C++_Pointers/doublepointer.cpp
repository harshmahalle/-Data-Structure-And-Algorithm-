#include<iostream>
using namespace std;

void update(int **p2){


    p2=p2+1; //change is no
    *p2=*p2+1;// change is yes
    **p2=**p2+1;//change is yes
}



int main(){
   int i=5;
   int* p=&i;
   int** p2=&p;
   
// 3 ways to print i value i.e. 5
   cout<<i<<endl;
   cout<<*p<<endl;
   cout<<**p2<<endl;
//ways to print p value
   cout<<&i<<endl;
   cout<<p<<endl;
   cout<<*p2<<endl;
 //ways to print p2
    cout<<&p<<endl;
    cout<<p2<<endl; 
     
     cout<<"before"<<i<<endl;
     cout<<"before"<<p<<endl;
     cout<<"before"<<p2<<endl;
    update(p2);
    cout<<"after"<<i<<endl;
    cout<<"after"<<p<<endl;
    cout<<"after"<<p2<<endl;

}