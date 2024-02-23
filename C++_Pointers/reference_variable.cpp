#include<iostream>
using namespace std;

int& fun(int a){
    int num=a;
    int& ans=num;
    return ans;
}

int* fun2(int n){
    int* ptr=&n;
    return ptr;
}


void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}

int main(){

   /* int i=5;
    //creating a reference variable
    int& j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;*/

     int n=5;
     cout<<"before"<<n<<endl;
    // update1(n);
     update2(n);
     cout<<"after"<<n<<endl;


    return 0;




}