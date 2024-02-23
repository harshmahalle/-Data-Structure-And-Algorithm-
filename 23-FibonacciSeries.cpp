#include<iostream>
using namespace std;
int main(){
int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b<<endl;
for(int i=1;i<=n;i++){
    int nextnum=a+b;
    a=b;
    b=nextnum;
    cout<<nextnum<<" ";
}
}